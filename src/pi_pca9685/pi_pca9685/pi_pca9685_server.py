import rclpy
import threading
from rclpy.action import ActionServer, CancelResponse, GoalResponse
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor
from rclpy.node import Node
from pi_pca9685_interfaces.action import PCA
# from adafruit_servokit import ServoKit

# class PCA9685_Servo:
#     def __init__(self):
#         # self.kit = ServoKit(channels=16)
#         self.servo_channels = range(1, 9)  # Servo channels (adjust as per your hardware)
        
#     def set_angles(self, angle_one, angle_two, angle_three, angle_four, angle_five, angle_six, angle_seven, angle_eight):
#         if len(self.servo_channels) != 8:
#             raise ValueError("The number of servo channels should be 8")
#         self.kit.servo[0].angle = angle_one
#         self.kit.servo[1].angle = angle_two
#         self.kit.servo[2].angle = angle_three
#         self.kit.servo[3].angle = angle_four
#         self.kit.servo[4].angle = angle_five
#         self.kit.servo[5].angle = angle_six
#         self.kit.servo[6].angle = angle_seven
#         self.kit.servo[7].angle = angle_eight

class PCA9685_Servo:
    def __init__(self):
        # Initialize servo channels (adjust as per your hardware)
        self.servo_channels = range(1, 9)

    def set_angles(self, angle_one, angle_two, angle_three, angle_four, angle_five, angle_six, angle_seven, angle_eight):
        if len(self.servo_channels) != 8:
            raise ValueError("The number of servo channels should be 8")
        
        # Simulate setting angles (for testing purposes)
        print(f"Setting angles: {angle_one}, {angle_two}, {angle_three}, {angle_four}, {angle_five}, {angle_six}, {angle_seven}, {angle_eight}")

class PCA9685ActionServer(Node):
    def __init__(self):
        super().__init__('pi_pca9685_server')
        
        self.servo_controller = PCA9685_Servo()
        self._goal_handle = None
        self._goal_lock = threading.Lock()

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
        self.get_logger().info('Handle Goal Accept')

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
        self.get_logger().info('Executing goal...')
        
        server_servo_commands = goal_handle.request.pca
        feedback_msg = PCA.Feedback()
        result = PCA.Result()
        self.get_logger().info(f'Received goal: {server_servo_commands}')
        
        servo_commands = server_servo_commands.split(';')
        if len(servo_commands) != 8:
            self.get_logger().warn('Invalid number of servo angles received. Expected 8 angles.')
            result.success = False
            goal_handle.abort()
            return result
        
        try:
            angle_one = int(servo_commands[0]) if servo_commands[0] else 0
            angle_two = int(servo_commands[1]) if servo_commands[1] else 0
            angle_three = int(servo_commands[2]) if servo_commands[2] else 0
            angle_four = int(servo_commands[3]) if servo_commands[3] else 0
            angle_five = int(servo_commands[4]) if servo_commands[4] else 0
            angle_six = int(servo_commands[5]) if servo_commands[5] else 0
            angle_seven = int(servo_commands[6]) if servo_commands[6] else 0
            angle_eight = int(servo_commands[7]) if servo_commands[7] else 0

            self.servo_controller.set_angles(angle_one, angle_two, angle_three, angle_four, angle_five, angle_six, angle_seven, angle_eight)

            self.get_logger().info(f'Set angles: {angle_one}, {angle_two}, {angle_three}, {angle_four}, {angle_five}, {angle_six}, {angle_seven}, {angle_eight}')

            feedback_msg.feedback = f'Set angles: {angle_one}, {angle_two}, {angle_three}, {angle_four}, {angle_five}, {angle_six}, {angle_seven}, {angle_eight}'
            goal_handle.publish_feedback(feedback_msg)

            result.success = True
            self.get_logger().info('Returned the Result')
            goal_handle.succeed()
            self.get_logger().info('Goal succeeded')

        except ValueError as e:
            self.get_logger().error(f'Error setting servo angles: {str(e)}')
            result.success = False
            goal_handle.abort()
        
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
