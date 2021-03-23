#ifndef GEARMASTER_MAINWINDOW_CLASS
#define GEARMASTER_MAINWINDOW_CLASS

#include <QMainWindow>
#include <QApplication>
class MainWindow : public QMainWindow {

 public:
  MainWindow(QWidget *parent = 0);
  void createNewDatabase();
  void openGearDatabase();
  void exit();
};

#endif
