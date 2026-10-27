import rclpy
from rclpy.node import Node


class BehaviourTree:
    def __init__(self, root, unicode_tree_debug=False):
        self.root = root
        self.node = None
        self.count = 0

    def setup(self, node_name="tree", timeout=None, visitor=None, node=None):
        self.node = node or Node(node_name)
        for b in self.root.iterate():   # post-order, as py_trees.trees.setup
            b.setup(node=self.node)

    def tick(self, pre_tick_handler=None, post_tick_handler=None):
        self.root.tick_once()
        self.count += 1
        if post_tick_handler is not None:
            post_tick_handler(self)

    def tick_tock(self, period_ms, number_of_iterations=-1, pre_tick_handler=None, post_tick_handler=None):
        self.node.create_timer(period_ms / 1000.0, lambda: self.tick(pre_tick_handler, post_tick_handler))

    def shutdown(self):
        if self.node is not None:
            self.node.destroy_node()
        rclpy.shutdown()
