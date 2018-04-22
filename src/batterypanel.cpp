#include "batterypanel.h"

BatteryPanel::BatteryPanel(QWidget *parent) : QWidget(parent)
{

}


void BatteryPanel::paintEvent(QPaintEvent *)
{
    QPainter painterpanel(this);

    painterpanel.setPen(QColor(255,255,255));
    ;
    painterpanel.drawText(0, 17, "Battery Pack");

    painterpanel.setBrush(QColor(45, 45, 45));
    painterpanel.setBrush(QColor(0,0,0,0));
    painterpanel.drawRect(0, 0, BAT_PANEL_WIDTH, BAT_PANEL_HEIGHT);

    int batterySlideSideSpacer = 20;
    int batteryColoumn0L = batterySlideSideSpacer;
    int batteryColoumno0R = BAT_WIDTH + batterySlideSideSpacer;
    int upperOffset = 45;

    battery1 = new BatteryIndicator(this);
    battery1->setGeometry(batteryColoumn0L, upperOffset, batteryColoumno0R, 500);
    battery1->show();

    battery2 = new BatteryIndicator(this);
    battery2->setGeometry(20, 90, BAT_WIDTH, BAT_HEIGHT);
    battery2->show();

    battery3 = new BatteryIndicator(this);
    battery3->setGeometry(BAT_WIDTH + 50, 20, BAT_WIDTH, BAT_HEIGHT);
    battery3->show();

    battery1->setCharge(50);
    battery2->setCharge(100);
    battery3->setCharge(80);
}
