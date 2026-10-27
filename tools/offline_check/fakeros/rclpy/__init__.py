"""In-process stand-in for rclpy (test harness only): one process, threads instead of DDS."""
import threading

from rclpy import _core

_shutdown = threading.Event()


def init(args=None):
    _shutdown.clear()


def ok():
    return not _shutdown.is_set()


def shutdown():
    _shutdown.set()


def spin(node, executor=None):
    while not _shutdown.wait(0.1):
        pass


def create_node(name, **kw):
    from rclpy.node import Node
    return Node(name, **kw)


__all__ = ["init", "ok", "shutdown", "spin", "create_node", "_core"]
