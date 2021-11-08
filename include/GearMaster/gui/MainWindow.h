#ifndef GEARMASTER_MAINWINDOW_CLASS
#define GEARMASTER_MAINWINDOW_CLASS

#include <QMainWindow>
#include <QApplication>
#include <QString>

#include "gui/OpenInventory.h"

class MainWindow : public QMainWindow {
Q_OBJECT
 
 public:
  MainWindow(QWidget *parent = 0);
  void createNewDatabase();
  void openGearDatabase();
  void exit();
  public slots:
    void fetchInventoryFilename(InventoryFilename &filename);
 private:
  void loadStartDialog();
  std::string inventoryFilename;
};

#endif
