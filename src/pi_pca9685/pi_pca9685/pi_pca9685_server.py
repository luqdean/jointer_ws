import time
import threading
import queue
import rclpy
from rclpy.action import ActionServer, CancelResponse, GoalResponse
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor
from rclpy.node import Node
from pi_pca9685_interfaces.action import PCA
from adafruit_servokit import ServoKit

class PCA9685_Servo:
    def __init__(self):
        self.kit = ServoKit(channels=16)
        
    def set_angle(self, servo_id, angle):
        self.kit.servo[servo_id].angle = angle


class PCA9685ActionServer(Node):
    def __init__(self):
        super().__init__('pi_pca9685_server')
              
        self.servo_queues = {}
        self.queue_locks = {}
        self.servo_threads = {}
        self.servo_controller = PCA9685_Servo()

        self._action_server = ActionServer(
            self,
            PCA,
            'pi_pca9685_server',
            execute_callback=self.execute_callback,
            goal_callback=self.goal_callback,
            handle_accepted_callback=self.handle_accepted_callback,
            cancel_callback=self.cancel_callback,
            callback_group=ReentrantCallbackGroup())

    def destroy(self):
        self._action_server.destroy()
        super().destroy_node()

    def goal_callback(self, goal_request):
        self.get_logger().info('Received goal request')
        return GoalResponse.ACCEPT

    def handle_accepted_callback(self, goal_handle):
        server_servo_commands = goal_handle.request.pca
        self.get_logger().info('Handle Goal Accept')
        for command in server_servo_commands:
            servo_id, _ = command.split(',')
            servo_id = int(servo_id)
        
            if servo_id not in self.servo_queues:
                self.servo_queues[servo_id] = queue.Queue()
                self.queue_locks[servo_id] = threading.Lock()
                self.servo_threads[servo_id] = threading.Thread(target=self._process_queue, args=(servo_id,))
                self.servo_threads[servo_id].start()

            self.servo_queues[servo_id].put(goal_handle)

    def cancel_callback(self, goal):
        self.get_logger().info('Received cancel request')
        return CancelResponse.ACCEPT

    def execute_callback(self, goal_handle):
        pass  # Execution is handled in the _process_queue method

    def _process_queue(self, servo_id):
        while rclpy.ok():
            goal_handle = self.servo_queues[servo_id].get()
            with self.queue_locks[servo_id]:
                self._execute_goal(goal_handle, servo_id)

    def _execute_goal(self, goal_handle, servo_id):
        self.get_logger().info('Executing goal...')

        server_servo_commands = goal_handle.request.pca
        feedback_msg = PCA.Feedback()
        result = PCA.Result()

        for command in server_servo_commands:
            cmd_servo_id, servo_angle = command.split(',')
            cmd_servo_id = int(cmd_servo_id)
            angle = int(servo_angle)

            if cmd_servo_id != servo_id:
                continue

            if not goal_handle.is_active:
                self.get_logger().info('Goal aborted')
                result.success = False
                goal_handle.abort()
                return

            if goal_handle.is_cancel_requested:
                goal_handle.canceled()
                self.get_logger().info('Goal canceled')
                result.success = False
                return

            self.get_logger().info(f'Setting servo {servo_id} to angle {angle}')
            self.servo_controller.set_angle(servo_id, angle)

            feedback_msg.feedback = f'Servo {servo_id} set to angle {angle}'
            goal_handle.publish_feedback(feedback_msg)
            time.sleep(1)

        goal_handle.succeed()
        result.success = True
        self.get_logger().info('Goal succeeded')

def main(args=None):
    rclpy.init(args=args)

    action_server = PCA9685ActionServer()

    executor = MultiThreadedExecutor()
    rclpy.spin(action_server, executor=executor)

    action_server.destroy()
    
    rclpy.shutdown()

if __name__ == '__main__':
    main()
