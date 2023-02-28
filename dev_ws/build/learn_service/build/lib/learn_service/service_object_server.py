#! usr/bin/env python3 

import rclpy 
from rclpy.node import Node 
from sensor_msgs.msg import Image 
import numpy as np 
from cv_bridge import CvBridge 
import cv2 
from learn_interface.srv import GetObjectPosition 

lower_red = np.array([0, 90, 128])
upper_red = np.array([180, 255, 255])

class ImageSubscriber(Node):

    def __init__(self, name):
        super().__init__(name)
        self.sub = self.create_subscription(Image, "image_raw", 
            self.listener_callback, 10)
        self.cv_bridge = CvBridge()
        self.srv = self.create_service(GetObjectPosition, 
            "get_target_position", self.object_position_callback)
        self.objectX = 0 
        self.objectY = 0 


    def object_detect(self, image):
        hsv_img = cv2.cvtColor(image, cv2.COLOR_BGR2HSV)      # 图像从BGR颜色模型转换为HSV模型
        mask_red = cv2.inRange(hsv_img, lower_red, upper_red) # 图像二值化
        contours, hierarchy = cv2.findContours(
            mask_red, cv2.RETR_LIST, cv2.CHAIN_APPROX_NONE)   # 图像中轮廓检测

        for cnt in contours:                                  # 去除一些轮廓面积太小的噪声
            if cnt.shape[0] < 150:
                continue

            (x, y, w, h) = cv2.boundingRect(cnt)              # 得到苹果所在轮廓的左上角xy像素坐标及轮廓范围的宽和高
            cv2.drawContours(image, [cnt], -1, (0, 255, 0), 2)# 将苹果的轮廓勾勒出来
            cv2.circle(image, (int(x+w/2), int(y+h/2)), 5,
                       (0, 255, 0), -1)                       # 将苹果的图像中心点画出来

            self.objectX = int(x+w/2)
            self.objectY = int(y+h/2)

        cv2.imshow("object", image)                            # 使用OpenCV显示处理后的图像效果
        cv2.waitKey(50)

    def listener_callback(self, data):
        self.get_logger().info("Receiving video frame")
        image = self.cv_bridge.imgmsg_to_cv2(data, "brg8")
        self.object_detect(image)

    def object_position_callback(self, request, response):
        if request.get == True:
            response.x = self.objectX                          # 目标物体的XY坐标
            response.y = self.objectY
            self.get_logger().info('Object position\nx: %d y: %d' %
                                   (response.x, response.y))   # 输出日志信息，提示已经反馈
        else:
            response.x = 0
            response.y = 0
            self.get_logger().info('Invalid command')          # 输出日志信息，提示已经反馈
        return response

def main(args=None):
    rclpy.init(args=args)
    node = ImageSubscriber("service_object_server")
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()