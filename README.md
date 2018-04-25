# t0r0_driving_gui

Another simple gui for T0R0!

# Compile from Command-Line
```
cd /home/<user>/catkin_ws/ && catkin_make
```

# Launch from Command-Line
```
rosrun t0r0_driving_gui driving_gui
```

# Update from Git Repository & Launch - with Makefile


Create the Makefile in the catkin_ws (Catkin Workspace) folder with the following content. Substitute \<user\> accordingly to your username
```
all:	 update	compile	show

update:
	cd /home/<user>/catkin_ws/src/t0r0_driving_gui/ && git pull origin master

compile:
	cd /home/<user>/catkin_ws/	&& catkin_make

show:
	rosrun t0r0_driving_gui driving_gui
```

 and the launch with
```
make
```

*tested on Ubuntu 16.04LTS with ROS Kinetic*
