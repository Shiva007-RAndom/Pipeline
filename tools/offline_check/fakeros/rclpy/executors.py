import rclpy


class MultiThreadedExecutor:
    def __init__(self, num_threads=None):
        self.nodes = []

    def add_node(self, node):
        self.nodes.append(node)

    def spin(self):
        rclpy.spin(None)


SingleThreadedExecutor = MultiThreadedExecutor
