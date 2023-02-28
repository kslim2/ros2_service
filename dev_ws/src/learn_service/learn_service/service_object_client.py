#!usr/bin/env python3

import rclpy 
from rclpy.node import Node 
from learn_interface.srv import GetObjectPosition 

class objectClient(Node):

    def __init__(self, name):
        super().__init__(name)
        self.client = self.create_client(GetObjectPosition, 
            "get_target_position")
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info("service not available, waiting again...")
        self.request = GetObjectPosition.Request() 

    def send_request(self):
        self.request.get = True 
        self.future = self.client.call_async(self.request)

def main(args=None):
    rclpy.init(args=args)
    node = objectClient("service_object_client")
    node.send_request()

    while rclpy.ok():
        rclpy.spin_once(node) 

        if node.future.done():
            try:
                response = node.future.result()
            except Exception as e:
                node.get_logger().info(
                    "Result of object position:\n x: %d y: %d" % 
                    (response.x, response.y)
                )
            else:
                node.get_logger().info(
                    "Result of object position:\n x: %d y: %d" % 
                    (response.x, response.y)
                )
            break 

    node.destroy_node()
    rclpy.shutdown()
        