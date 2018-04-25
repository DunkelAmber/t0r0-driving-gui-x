#ifndef WINDOW_H
#define WINDOW_H

#include "joystick.h"
#include "joypad.h"
#include "rovershow.h"
#include "startbutton.h"
#include "batteryindicator.h"
#include "batterypanel.h"
#include "imagebutton.h"
#include <QLabel>

#include <QString>

#define XPOS_BATTGROUP 0
#define YPOS_BATTGROUP 0

class Window : public QWidget
{
	Q_OBJECT

public:
    explicit Window(QRect screen, QWidget *parent = 0);

public slots:

private:
    bool connected;

    // Custom elements
    StartButton *start_button;
    RoverShow *rover;
    //BatteryIndicator *battery1, *battery2, *battery3, *battery4, *battery5, *battery6, *battery7, *battery8, *battery9, *battery10;
    BatteryPanel *batterypanel1;
		BatteryDisplay *batterydisplay;
    QLabel *pixlabel;
};

#endif // WINDOW_H
