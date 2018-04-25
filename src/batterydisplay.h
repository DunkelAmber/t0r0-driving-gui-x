#ifndef BATTERYDISPLAY_H
#define BATTERYDISPLAY_H

#include <QWidget>
#include <QPainter>

#include "batteryindicator.h"
#include "batterypanel.h"

#define BAT_DISPLAY_POSX 700
#define BAT_DISPLAY_POSY 300
#define BAT_DISPLAY_WIDTH 500
#define BAT_DISPLAY_HEIGHT 700

#define COL_SPACER 10
#define ROW_SPACER 10

class BatteryDisplay : public QWidget
{
		Q_OBJECT
	public:
    explicit BatteryDisplay(QWidget *parent = 0);
	signals:

	public slots:

protected:
		 void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;
private:
		 //BatteryIndicator *battery1, *battery2, *battery3, *battery4, *battery5, *battery6, *battery7, *battery8, *battery9, *battery10;
};

#endif // BATTERYDISPLAY_H
