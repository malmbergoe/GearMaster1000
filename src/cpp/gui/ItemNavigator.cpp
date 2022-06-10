#include "gui/ItemNavigator.h"

#include <QListWidgetItem>

ItemNavigator::ItemNavigator (QWidget *parent) : QListWidget(parent) {
  QListWidgetItem *first = new QListWidgetItem(tr("first"), this);
  QListWidgetItem *second = new QListWidgetItem(tr("second"), this);
  QListWidgetItem *third = new QListWidgetItem(tr("third"), this);
}
