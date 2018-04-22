#include <QApplication>
#include <QDesktopWidget>

#include "window.h"

int main(int argc, char **argv)
{
  QApplication app(argc, argv);

  QDesktopWidget *desktop = app.desktop();

  Window window(desktop->screenGeometry());
  //window.showMaximized();
  window.showNormal();
  //window.showFullScreen();
  //window.setFixedSize(500,500);

  return app.exec();
}
