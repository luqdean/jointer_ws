import rclpy
from rclpy.node import Node
from std_msgs.msg import String
import random
import time

class ServoAnglePublisher(Node):
    def __init__(self):
        super().__init__('servo_angle_publisher')
        self.publisher_ = self.create_publisher(String, 'servo_commands', 10)
        self.timer = self.create_timer(1.0, self.timer_callback)  # Publish every second

    def timer_callback(self):
        servo1_angle = random.randint(0, 180)  # Random angle for servo 1 between 0 and 180
        servo2_angle = random.randint(0, 180)  # Random angle for servo 2 between 0 and 180

        message1 = f'1,{servo1_angle}'  # Command for servo 1
        message2 = f'2,{servo2_angle}'  # Command for servo 2
        time.sleep(2)
        self.publisher_.publish(String(message1))
        self.publisher_.publish(String(message2))

        self.get_logger().info(f'Published: {message1}')
        self.get_logger().info(f'Published: {message2}')

def main(args=None):
    rclpy.init(args=args)
    servo_angle_publisher = ServoAnglePublisher()
    rclpy.spin(servo_angle_publisher)
    servo_angle_publisher.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
