#ifndef BATTERYPANEL_H
#define BATTERYPANEL_H

#include "batteryindicator.h"
#include <QWidget>
#include <QPainter>

#define BAT_PANEL_POSX 700
#define BAT_PANEL_POSY 300
#define BAT_PANEL_WIDTH 500
#define BAT_PANEL_HEIGHT 700

#define COL_SPACER 10
#define ROW_SPACER 10

class BatteryPanel : public QWidget
{
    Q_OBJECT
public:
    explicit BatteryPanel(QWidget *parent = 0);
signals:

public slots:

protected:
     void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;
private:
     BatteryIndicator *battery1, *battery2, *battery3, *battery4, *battery5, *battery6, *battery7, *battery8, *battery9, *battery10;
};

#endif // BATTERYPANEL_H
