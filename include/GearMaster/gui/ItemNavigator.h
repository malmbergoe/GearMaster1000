#ifndef ITEM_NAVIGATOR
#define ITEM_NAVIGATOR

#include <QListWidget>

class ItemNavigator: public QListWidget {
  Q_OBJECT
 public:
  ItemNavigator(QWidget *parent = nullptr);
};

#endif // ITEM_NAVIGATOR
