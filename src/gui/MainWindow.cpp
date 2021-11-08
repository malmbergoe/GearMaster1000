#include "gui/MainWindow.h"
#include "gui/ItemNavigator.h"
#include "gui/ItemView.h"

#include <QMenu>
#include <QMenuBar>
#include <QPushButton>
#include <QGridLayout>
#include <QLabel>
#include <QTextEdit>
#include <QPixmap>
#include <QMessageBox>
#include <stdlib.h>
#include <iostream>
MainWindow::MainWindow (QWidget *parent)
  : QMainWindow(parent) {



  QPixmap quitpix("quit.png");

  QPixmap newpix("new.png");
  QAction *newAction = new QAction(newpix, "&New", this);
  newAction->setShortcuts(QKeySequence::New);
  connect(newAction, &QAction::triggered, this, &MainWindow::createNewDatabase);
  
  QPixmap openpix("open.png");  
  QAction *openAction = new QAction(openpix, "&Open", this);
  openAction->setShortcuts(QKeySequence::Open);
  connect(openAction, &QAction::triggered, this, &MainWindow::openGearDatabase);
  
  QAction *quitAction = new QAction(quitpix, "&Quit", this);
  quitAction->setShortcut(QKeySequence::Quit);
  connect(quitAction, &QAction::triggered, this, &MainWindow::exit);
  
  QMenu *file;
  file = menuBar()->addMenu("&File");
  file->addAction(newAction);
  file->addAction(openAction);
  file->addSeparator();
  file->addAction(quitAction);
  

  ItemView *itemView = new ItemView(this);
  /*  QGridLayout *itemBody = new QGridLayout();
  QTextEdit *description = new QTextEdit("description", this);
  itemBody -> addWidget(description, 0, 1);
  QPixmap *image = new QPixmap("../backpack.jpg");
  QLabel *pic = new QLabel(this);
  pic -> setPixmap(*image);
  itemBody -> addWidget(pic, 0,0);*/

  /*
  QLabel *propertyOne = new QLabel(this);
  propertyOne -> setText("property one");
  itemBody -> addWidget(propertyOne, 1, 0);
  QLabel *propertyTwo = new QLabel(this);
  propertyTwo -> setText("property two");
  itemBody -> addWidget(propertyTwo, 1, 1);
  QLabel *propertyThree = new QLabel(this);
  propertyThree -> setText("property three");
  itemBody -> addWidget(propertyThree, 1, 2);
  
  */
  QPushButton *saveButton = new QPushButton("&Save");
  QPushButton *createButton = new QPushButton("&Create");

  ItemNavigator *itemNavigator = new ItemNavigator(this);
    
  QGridLayout *mainBody = new QGridLayout();
  mainBody->addWidget(saveButton, 1, 0);
  mainBody->addWidget(createButton, 1, 1);
  mainBody -> addWidget(itemNavigator, 0, 0);
  mainBody -> addLayout(itemView, 0, 2);
  QWidget *centralWidget = new QWidget();
  centralWidget -> setLayout(mainBody);
  
  this->setCentralWidget(centralWidget);

}

void MainWindow::fetchInventoryFilename(InventoryFilename &filename){
  this->inventoryFilename = filename.name;
  std::cout << "I have recieved word that I should open an inventory called " << this->inventoryFilename << std::endl;
}

void MainWindow::openGearDatabase(){
  QMessageBox msgBox;
  msgBox.setText("Seems like you wanted to open an existing database!");
  msgBox.exec();
}

void MainWindow::createNewDatabase(){
  QMessageBox msgBox;
  msgBox.setText("Seems like you wanted to create a new database!");
  msgBox.exec();
}

void MainWindow::exit(){
  QApplication::quit();
 }

