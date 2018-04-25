#include "batterydisplay.h"

#define PANEL_OFFSET_LEFT 20
#define PANEL_OFFSET_UP 22
#define PANEL_OFFSET_RIGHT 20
#define PANEL_OFFSET_DOWN 22
#define PANEL_SPACER 25

BatteryDisplay::BatteryDisplay(QWidget *parent) : QWidget(parent)
{

}

void BatteryDisplay::paintEvent(QPaintEvent *)
{

	QPainter painter(this);

	painter.setPen(QColor(255,255,255));
	painter.drawText(0, 17, "Battery Pack");

	painter.setBrush(QColor(0,0,0,0));
	painter.drawRect(0, 0, BAT_PANEL_WIDTH, BAT_PANEL_HEIGHT);

	int panelRightExtreme = BAT_PANEL_WIDTH + PANEL_OFFSET_LEFT + PANEL_OFFSET_RIGHT;
	battery1 = new BatteryPanel(this);
	battery1->setGeometry(PANEL_OFFSET_LEFT, PANEL_OFFSET_UP, PANEL_OFFSET_RIGHT, panelRightExtreme);
	battery1->show();
}
