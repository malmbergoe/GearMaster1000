#include "gui/ItemView.h"

#include <QGridLayout>
#include <QPushButton>
#include <QLabel>
#include <QTextEdit>
#include <QPixmap>


ItemView::ItemView (QWidget *parent) : QGridLayout(parent) {

  QTextEdit *description = new QTextEdit("description", parent);
  this -> addWidget(description, 0, 1);
  QPixmap *image = new QPixmap("../backpack.jpg");
  QLabel *pic = new QLabel();
  pic -> setPixmap(*image);
  this -> addWidget(pic, 0,0);

  QLabel *propertyOne = new QLabel();
  propertyOne -> setText("property one");
  this -> addWidget(propertyOne, 1, 0);
  QLabel *propertyTwo = new QLabel();
  propertyTwo -> setText("property two");
  this -> addWidget(propertyTwo, 1, 1);
  QLabel *propertyThree = new QLabel();
  propertyThree -> setText("property three");
  this -> addWidget(propertyThree, 1, 2);


  
}
