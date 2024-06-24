import rclpy
from rclpy.node import Node
from std_msgs.msg import String
import random

class ServoAnglePublisher(Node):
    def __init__(self):
        super().__init__('servo_angle_publisher')
        self.publisher_ = self.create_publisher(String, 'servo_commands', 10)
        self.timer_ = self.create_timer(1.0, self.publish_commands)

    def publish_commands(self):
        servo_commands = self.generate_random_commands()
        msg = String()
        msg.data = ';'.join(servo_commands)
        self.publisher_.publish(msg)
        self.get_logger().info(f'Publishing servo commands: {msg.data}')

    def generate_random_commands(self):
        commands = []
        for i in range(8):  # Generate 8 random angles
            angle = random.randint(0, 180)  # Random angle between 0 and 180 degrees
            commands.append(f'{angle}')
        return commands

def main(args=None):
    rclpy.init(args=args)
    servo_angle_publisher = ServoAnglePublisher()
    rclpy.spin(servo_angle_publisher)
    servo_angle_publisher.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
