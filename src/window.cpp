#include "window.h"

#define ROVIMG_WIDTH 375
#define ROVIMG_HEIGHT 580

// Constructor
Window::Window(QRect screen, QWidget *parent) : QWidget(parent)
{
    //this->setGeometry(0, 0, screen.width(), screen.height());   // -50
    this->setGeometry(0, 0, 1920, 1080);

    // set black background
    QPalette pal = palette();
    //pal.setColor(QPalette::Background, Qt::black);
    pal.setColor(QPalette::Background, QColor(52,55,63,255));
    this->setAutoFillBackground(true);
    this->setPalette(pal);


    QLabel *pixlabel = new QLabel(this);
    QPixmap pix("/home/francesco/catkin_ws/src/t0r0_driving_gui/Images/rover_up-357x580.png");
	pixlabel->setPixmap(pix.scaled(ROVIMG_WIDTH, ROVIMG_HEIGHT, Qt::KeepAspectRatio));
	pixlabel->setGeometry( (this->width() - ROVIMG_WIDTH) /2, (this->height() - ROVIMG_HEIGHT) /2, ROVIMG_WIDTH, ROVIMG_HEIGHT );

    //QPixmap mypix(":/img/rover_up-357x580.png");
    //painter.drawPixmap(0,0,600,600, mypix);
    //pixlabel->setPixmap(mypix);


    //this->pixlabel->setPixmap(mypix);
    //pixlabel->setPixmap(mypix);
    //pixlabel->show();
    //delete mypix;*/

    connected = false;

    // Custom elements
    start_button = new StartButton(this);
    start_button->setGeometry(this->width()/ 2 - 100, this->height() - 100, 200, 100);

    rover = new RoverShow(this);
    rover->setGeometry(300, 0, this->width() - 600, this->height() - 100);

		batterydisplay = new BatteryDisplay(this);
		batterydisplay->setGeometry(1350, (this->height() - BAT_DISPLAY_HEIGHT) / 2, BAT_DISPLAY_WIDTH + 2, BAT_DISPLAY_HEIGHT + 2);

    //batterypanel1 = new BatteryPanel(this);
    //batterypanel1->setGeometry(1350, (this->height() - BAT_PANEL_HEIGHT) / 2, BAT_PANEL_WIDTH + 2, BAT_PANEL_HEIGHT + 2);
    /*
    battery1 = new BatteryIndicator(this);
    battery1->setGeometry(this->width() / 2 + 200, this->height() - 190, BAT_WIDTH, BAT_HEIGHT);

    battery2 = new BatteryIndicator(this);
    battery2->setGeometry(this->width() / 2 + 200, this->height() - 120, BAT_WIDTH, BAT_HEIGHT);
   /*
    battery3 = new BatteryIndicator(this);
    battery3->setGeometry(this->width() / 2 + 260, this->height() - 80, 21, 70);
    battery4 = new BatteryIndicator(this);
    battery4->setGeometry(this->width() / 2 + 290, this->height() - 80, 21, 70);
    battery5 = new BatteryIndicator(this);
    battery5->setGeometry(this->width() / 2 + 320, this->height() - 80, 21, 70);
    battery6 = new BatteryIndicator(this);
    battery6->setGeometry(this->width() / 2 + 350, this->height() - 80, 21, 70);
    battery7 = new BatteryIndicator(this);
    battery7->setGeometry(this->width() / 2 + 380, this->height() - 80, 21, 70);
    battery8 = new BatteryIndicator(this);
    battery8->setGeometry(this->width() / 2 + 410, this->height() - 80, 21, 70);
    battery9 = new BatteryIndicator(this);
    battery9->setGeometry(this->width() / 2 + 440, this->height() - 80, 21, 70);
    battery10 = new BatteryIndicator(this);
    battery10->setGeometry(this->width() / 2 + 470, this->height() - 80, 21, 70);

    battery2->setCharge(70);
    battery3->setCharge(45);
    battery4->setCharge(10);
    */
    //battery1->setCharge(50);
    //battery2->setCharge(100);
}
