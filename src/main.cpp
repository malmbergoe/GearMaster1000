#include <iostream>
#include <QApplication>
#include <QPushButton>
#include "gui/MainWindow.h"

#include <QFileDialog>

#include "storage/StorageService.h"
#include "gui/OpenInventory.h"


int main (int argc, char **argv) {
  
//  QWidget openFileWindow;
//  QString inventoryName = QFileDialog::getOpenFileName(&openFileWindow,
//						       QObject::tr("Open Inventory"),
//						       "~",
//						       QObject::tr("test (*.txt)"));
//  
  QApplication gearmaster(argc, argv);
  MainWindow mainWindow;

  mainWindow.resize(600, 350);
  mainWindow.setWindowTitle("GearMaster - 1000");
  OpenInventory openInventory(&mainWindow);
  openInventory.open();
  QObject::connect(&openInventory, SIGNAL(rejected()), &gearmaster, SLOT(quit()));
  QObject::connect(&openInventory, SIGNAL(accepted()), &mainWindow, SLOT(show()));
  QObject::connect(&openInventory, SIGNAL(getInventoryFilename(InventoryFilename &)), &mainWindow, SLOT(fetchInventoryFilename(InventoryFilename &)));

  StorageService storage;
  storage.connect("awesome sauce with bananas and peanuts!!!!");

  return gearmaster.exec();
}
