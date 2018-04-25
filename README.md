# t0r0_driving_gui

A simple gui for T0R0!


# Launch with Makefile

Makefile
'''
all:	 update	compile	show

update:
	cd /home/francesco/catkin_ws/src/t0r0_driving_gui/ && git pull origin master

compile:
	cd /home/francesco/catkin_ws/	&& catkin_make

show:
	rosrun t0r0_driving_gui driving_gui
'''
