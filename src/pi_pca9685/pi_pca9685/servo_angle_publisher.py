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
        self.angles = [90, 150, 90, 30, 90, 150, 90, 30]
        self.angle_step = 10  # Step to decrease angles
        self.lift_angle_PIN15 = 110
        self.default_angle_PIN15 = 150

        self.forward_angle_PIN0 = 70
        self.default_angle_PIN0 = 90
        self.back_angle_PIN0 = 110

        self.forward_angle_PIN4 = 110
        self.default_angle_PIN4 = 90
        self.back_angle_PIN4 = 70

        self.lift_angle_PIN37 = 70
        self.default_angle_PIN37 = 30

        self.forward_angle_PIN2 = 70
        self.default_angle_PIN2 = 90
        self.back_angle_PIN2 = 110

        self.forward_angle_PIN6 = 110
        self.default_angle_PIN6 = 90
        self.back_angle_PIN6 = 70

    def publish_angles(self):
        msg = String()
        msg.data = ';'.join(map(str, self.angles))
        self.publisher_.publish(msg)
        self.get_logger().info(f'Publishing servo angles: {msg.data}')
    def decrease_angles(self):
        self.publish_angles()
        while not (self.angles[1] == self.lift_angle_PIN15 and self.angles[0] == self.forward_angle_PIN0 ):
            if self.angles[1] > self.lift_angle_PIN15:
                self.angles[1] = self.angles[1] - self.angle_step
                self.publish_angles()
                time.sleep(1)
            elif self.angles[0] > self.forward_angle_PIN0:
                self.angles[0] = self.angles[0] - self.angle_step
                self.publish_angles()
                time.sleep(1)
            else:
                self.get_logger().info("Lift Leg 1 and Move the Leg 1")
                break

        while not (self.angles[1] == self.default_angle_PIN15 ):
            if self.angles[1] < self.default_angle_PIN15:
                self.angles[1] = self.angles[1] + self.angle_step
                self.publish_angles()
                time.sleep(1)
            else:
                self.get_logger().info("Leg 1 Touch the ground")
                break

        while not (self.angles[5] == self.lift_angle_PIN15 and self.angles[4] == self.forward_angle_PIN4 ):
            if self.angles[5] > self.lift_angle_PIN15:
                self.angles[5] = self.angles[5] - self.angle_step
                self.publish_angles()
                time.sleep(1)
            elif self.angles[4] < self.forward_angle_PIN4:
                self.angles[4] = self.angles[4] + self.angle_step
                self.publish_angles()
                time.sleep(1)
            else:
                self.get_logger().info("Lift Leg 3 and Move the Leg 3")
                break

        while not (self.angles[5] == self.default_angle_PIN15 ):
            if self.angles[5] < self.default_angle_PIN15:
                self.angles[5] = self.angles[5] + self.angle_step
                self.publish_angles()
                time.sleep(1)
            else:
                self.get_logger().info("Leg 3 Touch the ground")
                break

        while not (self.angles[0] == self.forward_angle_PIN0 and self.angles[4] == self.forward_angle_PIN4
                   and self.angles[2] == self.back_angle_PIN2 and self.angles[6] == self.back_angle_PIN6 ):
            if  self.angles[0] < self.default_angle_PIN0:
                self.angles[0] = self.angles[0] + self.angle_step
                self.publish_angles()
                time.sleep(1)

            elif self.angles[4] > self.default_angle_PIN4:
                self.angles[4] = self.angles[4] - self.angle_step
                self.publish_angles()
                time.sleep(1)

            elif self.angles[2] < self.back_angle_PIN2:
                self.angles[2] = self.angles[2] + self.angle_step
                self.publish_angles()
                time.sleep(1)

            elif self.angles[6] > self.back_angle_PIN6:
                self.angles[6] = self.angles[6] - self.angle_step
                self.publish_angles()
                time.sleep(1)

            else:
                self.get_logger().info("Move Leg 0 and Move the Leg 2 Move Leg 4 and Move the Leg 6")
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
