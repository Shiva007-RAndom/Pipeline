import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/shiva/ML/banner_corridor_ws_2/banner_corridor_ws/install/mission_hud'
