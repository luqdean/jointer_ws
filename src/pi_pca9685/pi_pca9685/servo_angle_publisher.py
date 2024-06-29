import rclpy
import time
from rclpy.node import Node
from std_msgs.msg import String
import termios, tty, sys

class KeyboardPublisher(Node):
    def __init__(self):
        super().__init__('keyboard_publisher')
        self.publisher_ = self.create_publisher(String, 'servo_commands', 10)
        # Initialize angles as specified
        self.angles = [90, 160, 90, 160, 90, 160, 90, 160]
        self.angle_step = 10  # Step to decrease angles
        self.min_angle_x = 100  # Minimum angle limit
        self.min_angle_y = 60
        self.default_angle_x = 160
        self.default_angle_y = 90
        self.max_angle_y = 120
    def publish_angles(self):
        msg = String()
        msg.data = ';'.join(map(str, self.angles))
        self.publisher_.publish(msg)
        self.get_logger().info(f'Publishing servo angles: {msg.data}')
    def decrease_angles(self):
        while not (self.angles[1] == self.min_angle_x and self.angles[7] == self.min_angle_x 
                   and self.angles[0] == self.min_angle_y and self.angles[6] == self.min_angle_y 
                   and self.angles[2] == self.max_angle_y and self.angles[4] == self.max_angle_y):
            if self.angles[1] > self.min_angle_x and self.angles[7] > self.min_angle_x:
                self.angles[1] = self.angles[1] - self.angle_step
                self.angles[7] = self.angles[7] - self.angle_step
                self.publish_angles()
                time.sleep(1)
            elif self.angles[0] > self.min_angle_y and self.angles[6] > self.min_angle_y and self.angles[0] < self.max_angle_y and self.angles[6] < self.max_angle_y:
                self.angles[0] = self.angles[0] - self.angle_step
                self.angles[6] = self.angles[6] - self.angle_step
                self.angles[2] = self.angles[2] + self.angle_step
                self.angles[4] = self.angles[4] + self.angle_step
                self.publish_angles()
                time.sleep(1)
            else:
                self.get_logger().info("First Angles reached for all servos.")
                break

        while not (self.angles[1] == self.default_angle_x and self.angles[7] == self.default_angle_x ):    
            if self.angles[1] < self.default_angle_x and self.angles[7] < self.default_angle_x:
                self.angles[1] = self.angles[1] + self.angle_step
                self.angles[7] = self.angles[7] + self.angle_step
                self.publish_angles()
                time.sleep(1)
            else:
                self.get_logger().info("Angles reached max value.")
                break

        while not (self.angles[3] == self.min_angle_x and self.angles[5] == self.min_angle_x 
                   and self.angles[2] == self.default_angle_y and self.angles[4] == self.default_angle_y
                   and self.angles[0] == self.default_angle_y and self.angles[6] == self.default_angle_y):      
                if self.angles[3] > self.min_angle_x and self.angles[5] > self.min_angle_x:
                    self.angles[3] = self.angles[3] - self.angle_step
                    self.angles[5] = self.angles[5] - self.angle_step
                    self.publish_angles()
                    time.sleep(1)
                elif self.angles[2] > self.default_angle_y and self.angles[4] > self.default_angle_y: 
                    self.angles[2] = self.angles[2] - self.angle_step
                    self.angles[4] = self.angles[4] - self.angle_step
                    self.angles[0] = self.angles[0] + self.angle_step
                    self.angles[6] = self.angles[6] + self.angle_step
                    self.publish_angles()
                    time.sleep(1)
                else:
                    self.get_logger().info("First Angles reached for all servos.3")
                    break
        while not (self.angles[3] == self.default_angle_x and self.angles[5] == self.default_angle_x ):
                if self.angles[3] < self.default_angle_x and self.angles[5] < self.default_angle_x:
                    self.angles[3] = self.angles[3] + self.angle_step
                    self.angles[5] = self.angles[5] + self.angle_step  
                    self.publish_angles()
                    time.sleep(1)
                else:
                    self.get_logger().info("Second Angles reached for all servos.4")
                    break

    def update_angles(self):
        self.decrease_angles()
        # Decrease angles at positions 1 and 7
       

def get_key():
    tty.setraw(sys.stdin.fileno())
    key = sys.stdin.read(1)
    termios.tcsetattr(sys.stdin, termios.TCSADRAIN, termios.tcgetattr(sys.stdin))
    return key

def main(args=None):
    rclpy.init(args=args)
    node = KeyboardPublisher()

    print("Press 'w' to decrease servo angles.")
    print("Press 'q' to quit.")
    print("Press 'Ctrl+C' to force quit.")

    try:
        while rclpy.ok():
            key = get_key()

            if key == 'w':
                node.update_angles()
            elif key == 'q':
                break
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
