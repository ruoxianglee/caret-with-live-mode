#!/bin/bash

source /opt/ros/humble/setup.bash
source /home/ad/ros2_caret_ws/install/local_setup.bash
source /home/ad/ros2_caret_ws/caret_topic_filter.bash

export LD_PRELOAD=$(readlink -f /home/ad/ros2_caret_ws/install/caret_trace/lib/libcaret.so)

USERNAME=$(whoami)
ps -axo user:32,command | grep lttng-sessiond | grep $USERNAME | grep -v grep > /dev/null
if [ $? -ne 0 ]; then
  lttng-sessiond --daemonize
fi

# If you want to apply CARET to a large application,
# it is recommended to increase the maximum number of
# file descriptors to avoid data loss.
# Execute ulimit command as below.
# ulimit -n 16384

# Add user application built with caret/rclcpp
# source /path/to/your/application/install/setup.bash
