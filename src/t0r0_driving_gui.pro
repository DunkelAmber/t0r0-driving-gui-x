#-------------------------------------------------
#
# Project created by QtCreator 2017-10-12T15:34:29
#
#-------------------------------------------------

QT += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = gui
TEMPLATE = app

SOURCES += main.cpp window.cpp joystick.cpp joypad.cpp startbutton.cpp rovershow.cpp batteryindicator.cpp imagebutton.cpp def.cpp \
    batterypanel.cpp \
    batteryindicator.cpp \
    batterypanel.cpp \
    def.cpp \
    imagebutton.cpp \
    joypad.cpp \
    joystick.cpp \
    main.cpp \
    rovershow.cpp \
    startbutton.cpp \
    window.cpp \
    batterydisplay.cpp

HEADERS  += window.h joystick.h joypad.h startbutton.h rovershow.h batteryindicator.h imagebutton.h \
    batterypanel.h \
    batteryindicator.h \
    batterypanel.h \
    imagebutton.h \
    joypad.h \
    joystick.h \
    rovershow.h \
    startbutton.h \
    window.h \
    batterydisplay.h

RESOURCES += ../Images/joystick.png \
    ../Images/res.qrc

DISTFILES +=
