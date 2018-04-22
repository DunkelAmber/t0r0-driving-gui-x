#include "batteryindicator.h"

BatteryIndicator::BatteryIndicator(QWidget *parent) : QWidget(parent)
{
    charge = 100;
    in_use = false;
}

void BatteryIndicator::paintEvent(QPaintEvent *)
{
    QPainter painter(this);

    // Battery charge colors
    QColor fully(0, 227, 20);
    QColor good(128, 255, 0);
    QColor med(200, 200, 0);
    QColor low(200, 0, 0);

    // Draw battery package
    //painter.setPen(QColor(0, 239, 20));
    painter.setBrush(QColor(45, 45, 45));
    painter.drawRect(0, 0, BAT_WIDTH, BAT_HEIGHT);

    //painter.drawRect(5, 0, 10, 3);

    //painter.drawRect(0, 3, 20, 5);
    //painter.drawLine(0, 3, 0, 60);
    //painter.drawLine(20, 3, 20, 60);
    //painter.drawRect(0, 58, 20, 5);

    // Draw battery charge
    if(charge > GOODCHARGE)
    {
        painter.setPen(fully);
        painter.setBrush(fully);
    }
    else if(charge > MEDCHARGE)
    {
        painter.setPen(good);
        painter.setBrush(good);
    }
    else if(charge > LOWCHARGE)
    {
        painter.setPen(med);
        painter.setBrush(med);
    }
    else
    {
        painter.setPen(low);
        painter.setBrush(low);
    }

    int barPerc = charge * BAT_WIDTH / 100;
    painter.drawRect(1, 1, barPerc, BAT_HEIGHT-1);

    painter.setPen(QColor(255, 255, 255));
    painter.rotate(0);
    int fontSizeCorrectionY =  -14;
    if(charge == 100)
        painter.drawText((BAT_WIDTH/2)-25, BAT_HEIGHT+fontSizeCorrectionY, QString::number(charge) + "%");
    else if(charge > 9)
        painter.drawText((BAT_WIDTH/2)-25, BAT_HEIGHT+fontSizeCorrectionY, " " + QString::number(charge) + "%");
    else
        painter.drawText((BAT_WIDTH/2)-25, BAT_HEIGHT+fontSizeCorrectionY, "  " + QString::number(charge) + "%");
    painter.rotate(0);

     /*
    // Draw in-use gradient
    if(in_use)
        painter.setPen(QColor(50, 200, 255));
    else
        painter.setPen(Qt::NoPen);

    painter.setPen(QColor(255, 0, 0));
    painter.drawLine(0, 0, 20, 68);
    painter.drawLine(0, 0, 20, 69);
    painter.drawLine(0, 0, 20, 70);
    */
}

void BatteryIndicator::setCharge(int charge)
{
    this->charge = charge;
    this->update();
}

void BatteryIndicator::setInUse(bool status)
{
    in_use = true;
    this->update();
}
