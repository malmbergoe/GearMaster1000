#include <iostream>
#include <QApplication>
#include <QPushButton>
#include "gui/MainWindow.h"

int main (int argc, char **argv) {

  QApplication gearmaster(argc, argv);
  MainWindow mainWindow;

  mainWindow.resize(600, 350);
  mainWindow.setWindowTitle("GearMaster - 1000");
  mainWindow.show();
  return gearmaster.exec();
}
