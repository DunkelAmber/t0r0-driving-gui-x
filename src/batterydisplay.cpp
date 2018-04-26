#include "batterydisplay.h"

#define PANEL_OFFSET_LEFT 20
#define PANEL_OFFSET_UP 22
#define PANEL_OFFSET_RIGHT 20
#define PANEL_OFFSET_DOWN 22
#define PANEL_VERTICAL_SPACER 20

BatteryDisplay::BatteryDisplay(QWidget *parent) : QWidget(parent)
{

}

void BatteryDisplay::paintEvent(QPaintEvent *)
{

	QPainter painter(this);

	painter.setPen(QColor(255,255,255));
	painter.drawText(0, 17, "Battery Pack");

	painter.setBrush(QColor(0,0,0,0));
	painter.drawRect(0, 0, BAT_DISPLAY_WIDTH, BAT_DISPLAY_HEIGHT);

	int panelRightExtreme = BAT_PANEL_WIDTH + PANEL_OFFSET_LEFT + PANEL_OFFSET_RIGHT;
	pbattery1 = new BatteryPanel(this);
	pbattery1->setGeometry(0, 0, BAT_PANEL_WIDTH, BAT_PANEL_HEIGHT);
	pbattery1->show();

	pbattery2 = new BatteryPanel(this);
	pbattery2->setGeometry(BAT_PANEL_WIDTH+25, 0, BAT_PANEL_WIDTH, BAT_PANEL_HEIGHT);
	pbattery2->show();

	pbattery3 = new BatteryPanel(this);
	pbattery3->setGeometry(0, 1*(BAT_PANEL_HEIGHT+PANEL_VERTICAL_SPACER), BAT_PANEL_WIDTH, BAT_PANEL_HEIGHT);
	pbattery3->show();

	pbattery4 = new BatteryPanel(this);
	pbattery4->setGeometry(BAT_PANEL_WIDTH+25, 1*(BAT_PANEL_HEIGHT+PANEL_VERTICAL_SPACER), BAT_PANEL_WIDTH, BAT_PANEL_HEIGHT);
	pbattery4->show();

	pbattery5 = new BatteryPanel(this);
	pbattery5->setGeometry(0, 2*(BAT_PANEL_HEIGHT+PANEL_VERTICAL_SPACER), BAT_PANEL_WIDTH, BAT_PANEL_HEIGHT);
	pbattery5->show();

	pbattery6 = new BatteryPanel(this);
	pbattery6->setGeometry(BAT_PANEL_WIDTH+25, 2*(BAT_PANEL_HEIGHT+PANEL_VERTICAL_SPACER), BAT_PANEL_WIDTH, BAT_PANEL_HEIGHT);
	pbattery6->show();

	pbattery7 = new BatteryPanel(this);
	pbattery7->setGeometry(0, 3*(BAT_PANEL_HEIGHT+PANEL_VERTICAL_SPACER), BAT_PANEL_WIDTH, BAT_PANEL_HEIGHT);
	pbattery7->show();

	pbattery8 = new BatteryPanel(this);
	pbattery8->setGeometry(BAT_PANEL_WIDTH+25, 3*(BAT_PANEL_HEIGHT+PANEL_VERTICAL_SPACER), BAT_PANEL_WIDTH, BAT_PANEL_HEIGHT);
	pbattery8->show();

	pbattery9 = new BatteryPanel(this);
	pbattery9->setGeometry(0, 4*(BAT_PANEL_HEIGHT+PANEL_VERTICAL_SPACER), BAT_PANEL_WIDTH, BAT_PANEL_HEIGHT);
	pbattery9->show();

	pbattery10 = new BatteryPanel(this);
	pbattery10->setGeometry(BAT_PANEL_WIDTH+25, 4*(BAT_PANEL_HEIGHT+PANEL_VERTICAL_SPACER), BAT_PANEL_WIDTH, BAT_PANEL_HEIGHT);
	pbattery10->show();

	pbattery1->setCharge(9);
	pbattery2->setCharge(15);
	pbattery3->setCharge(26);
	pbattery4->setCharge(37);
	pbattery5->setCharge(48);
	pbattery6->setCharge(59);
	pbattery7->setCharge(61);
	pbattery8->setCharge(72);
	pbattery9->setCharge(84);
	pbattery10->setCharge(99);
}
