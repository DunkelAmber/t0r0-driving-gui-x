#include "batterydisplay.h"

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
	
}
