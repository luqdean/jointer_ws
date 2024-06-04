import time
import threading
import rclpy
from rclpy.action import ActionServer, CancelResponse, GoalResponse
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor
from rclpy.node import Node
from pi_pca9685_interfaces.action import PCA
from adafruit_servokit import ServoKit

class PCA9685_Servo:
    def __init__(self, servo_id, angle):
        self.servo_id = servo_id
        self.kit = ServoKit(channels=16)
        self.set_angle(angle)
        
    def set_angle(self, angle):
        self.kit.servo[self.servo_id].angle = angle
        time.sleep(1)

class PCA9685ActionServer(Node):
    def __init__(self):
        super().__init__('pi_pca9685_server')
              
        self._goal_handle = None
        self._goal_lock = threading.Lock()

        # Node, servo_angle, action_name, execute_callback
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
        with self._goal_lock:
            if self._goal_handle is not None and self._goal_handle.is_active:
                self.get_logger().info('Aborting previous goal')
                self._goal_handle.abort()
            self._goal_handle = goal_handle

        goal_handle.execute()

    def cancel_callback(self, goal):
        self.get_logger().info('Received cancel request')
        return CancelResponse.ACCEPT

    def execute_callback(self, goal_handle):
        """Executes the goal."""
        self.get_logger().info('Executing goal...')

        # Populate goal message
        goal_msg = goal_handle.request.pca

        # Populate feedback message
        feedback_msg = PCA.Feedback()
        feedback_msg.feedback = 1

        # Populate result message
        result = PCA.Result()

        if not goal_handle.is_active:
            self.get_logger().info('Goal aborted')
            return PCA.Result()

        if goal_handle.is_cancel_requested:
            goal_handle.canceled()
            self.get_logger().info('Goal canceled')
            return PCA.Result()

        # Publish the feedback
        goal_handle.publish_feedback(feedback_msg)

        servo_id, servo_angle = goal_msg.split(',')   
        angle = int(servo_angle)
        self.get_logger().info(f'Setting servo {servo_id} to angle {angle}')
        PCA9685_Servo(int(servo_id), angle)

        goal_handle.succeed()
        return result

def main(args=None):
    rclpy.init(args=args)

    action_server = PCA9685ActionServer()

    executor = MultiThreadedExecutor()
    rclpy.spin(action_server, executor=executor)

    action_server.destroy()
    
    rclpy.shutdown()

if __name__ == '__main__':
    main()
