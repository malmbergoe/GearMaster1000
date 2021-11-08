#ifndef GEARMASTER_OPENINVENTORY_CLASS
#define GEARMASTER_OPENINVENTORY_CLASS

#include <QDialog>

class Inventory;

class OpenInventory : public QDialog {
  Q_OBJECT
  signals:
    void getInventoryFilename(const Inventory &param);
  public:
    OpenInventory(QWidget *parent = nullptr);
  public slots:
    void inventoryFilenameSet();
};

#endif //GEARMASTER_OPENINVENTORY_CLASS
