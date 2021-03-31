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

MainWindow::MainWindow (QWidget *parent)
  : QMainWindow(parent) {

  QPixmap newpix("new.png");
  QPixmap openpix("open.png");
  QPixmap quitpix("quit.png");

  QAction *newa = new QAction(newpix, "&New", this);
  QAction *open = new QAction(openpix, "&Open", this);
  QAction *quit = new QAction(quitpix, "&Quit", this);
  quit->setShortcut(tr("CTRL+Q"));

  QMenu *file;
  file = menuBar()->addMenu("&File");
  file->addAction(newa);
  file->addAction(open);
  file->addSeparator();
  file->addAction(quit);
  

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
