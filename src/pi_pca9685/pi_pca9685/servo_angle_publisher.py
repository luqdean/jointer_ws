import rclpy
import time
from rclpy.node import Node
from std_msgs.msg import String
import termios, tty, sys
import threading

class KeyboardPublisher(Node):
    def __init__(self):
        super().__init__('keyboard_publisher')
        self.publisher_ = self.create_publisher(String, 'servo_commands', 10)
        self.angles = [120, 130, 60, 50, 120, 130, 60, 50]
        self.lift_angle_PIN15 = 125
        self.default_angle_PIN15 = 130
        self.forward_angle_PIN0 = 160
        self.default_angle_PIN0 = 120
        self.back_angle_PIN0 = 80
        self.forward_angle_PIN4 = 80
        self.default_angle_PIN4 = 120
        self.back_angle_PIN4 = 160
        self.lift_angle_PIN37 = 55
        self.default_angle_PIN37 = 50
        self.forward_angle_PIN2 = 100
        self.default_angle_PIN2 = 60
        self.back_angle_PIN2 = 20
        self.forward_angle_PIN6 = 20
        self.default_angle_PIN6 = 60
        self.back_angle_PIN6 = 100
        self.loop_flag = False

    def publish_angles(self):
        msg = String()
        msg.data = ';'.join(map(str, self.angles))
        self.publisher_.publish(msg)
        self.get_logger().info(f'Publishing servo angles: {msg.data}')

    def task_angles(self):
        self.publish_angles()
        self.get_logger().info("Default Position #5451 ")
        time.sleep(2)

        self.angles[0] = self.forward_angle_PIN0
        self.angles[1] = self.lift_angle_PIN15
        self.angles[5] = self.lift_angle_PIN15
        self.angles[4] = self.forward_angle_PIN4
        self.publish_angles()
        self.get_logger().info("Lift Leg 1 & 3 and Move the Leg 1 & 3 #5452 ")
        time.sleep(2)

        self.angles[1] = self.default_angle_PIN15
        self.angles[5] = self.default_angle_PIN15
        self.publish_angles()
        self.get_logger().info("Leg 1 & 3 Touch the ground #5453")
        time.sleep(2)

    def spin_angles(self):
        self.angles[0] = self.default_angle_PIN0
        self.angles[4] = self.default_angle_PIN4
        self.angles[3] = self.lift_angle_PIN37
        self.angles[7] = self.lift_angle_PIN37
        self.angles[2] = self.forward_angle_PIN2
        self.angles[6] = self.forward_angle_PIN6
        self.publish_angles()
        self.get_logger().info("Move Leg 1 and Move the Leg 2 Move Leg 4 and Move the Leg 6 #5454")
        time.sleep(2)

        self.angles[7] = self.default_angle_PIN37
        self.angles[3] = self.default_angle_PIN37
        self.publish_angles()
        self.get_logger().info("Put down Leg 2 & 6 #5455 ")
        time.sleep(2)

        self.angles[2] = self.default_angle_PIN2
        self.angles[6] = self.default_angle_PIN6
        self.angles[1] = self.lift_angle_PIN15
        self.angles[5] = self.lift_angle_PIN15
        self.angles[0] = self.forward_angle_PIN0
        self.angles[4] = self.forward_angle_PIN4
        self.publish_angles()
        self.get_logger().info("Move Leg 1 and Move the Leg 2 Move Leg 3 and Move the Leg 6 #5456")
        time.sleep(2)

        self.angles[1] = self.default_angle_PIN15
        self.angles[5] = self.default_angle_PIN15
        self.publish_angles()
        self.get_logger().info("Put down Leg 1 & 5 #5457 ")
        time.sleep(2)

    def update_angles(self):
        self.task_angles()
        self.loop_flag = True
        while self.loop_flag:
            self.spin_angles()

def get_key():
    tty.setraw(sys.stdin.fileno())
    key = sys.stdin.read(1)
    termios.tcsetattr(sys.stdin, termios.TCSADRAIN, termios.tcgetattr(sys.stdin))
    return key

def main(args=None):
    rclpy.init(args=args)
    node = KeyboardPublisher()

    print("Press 'w' to start servo angles loop.")
    print("Press 's' to stop servo angles loop.")
    print("Press 'q' to quit.")
    print("Press 'Ctrl+C' to force quit.")

    try:
        while rclpy.ok():
            key = get_key()
            if key == 'w':
                if not node.loop_flag:
                    threading.Thread(target=node.update_angles).start()
            elif key == 's':
                node.loop_flag = False
            elif key == 'q':
                break
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
