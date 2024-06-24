import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node
from std_msgs.msg import String
from pi_pca9685_interfaces.action import PCA
import queue

class PCA9685ActionClient(Node):

    def __init__(self):
        super().__init__('pi_pca9685_client')
        self._action_client = ActionClient(self, PCA, 'pi_pca9685_server')
        self._subscription = self.create_subscription(
            String,
            'servo_commands',
            self.listener_callback,
            10)
        self.command_queue = queue.Queue()

    def listener_callback(self, msg):
        self.get_logger().info(f'Received: {msg.data}')
        self.command_queue.put(msg.data)
        self.send_batch_goal()

    def send_batch_goal(self):
        if self.command_queue.empty():
            return

        batch_commands = ";".join(list(self.command_queue.queue))
        self.command_queue.queue.clear()  # Clear the queue after forming batch
        self.send_goal(batch_commands)

    def send_goal(self, batch_commands):
        goal_msg = PCA.Goal()
        goal_msg.pca = batch_commands

        self._action_client.wait_for_server()
        self.get_logger().info('Sending batch goal request...')

        self._send_goal_future = self._action_client.send_goal_async(
            goal_msg,
            feedback_callback=self.feedback_callback)
        self._send_goal_future.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Goal rejected')
            return

        self.get_logger().info('Goal accepted')
        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback)

    def feedback_callback(self, feedback_msg):
        self.get_logger().info(f'Received feedback: {feedback_msg.feedback}')

    def get_result_callback(self, future):
        result = future.result().result
        self.get_logger().info('Result received')
        # Process the result here if needed

def main(args=None):
    rclpy.init(args=args)

    action_client = PCA9685ActionClient()

    rclpy.spin(action_client)

    action_client.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
