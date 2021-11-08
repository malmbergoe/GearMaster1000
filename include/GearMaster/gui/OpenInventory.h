#ifndef GEARMASTER_OPENINVENTORY_CLASS
#define GEARMASTER_OPENINVENTORY_CLASS


#include <QDialog>
#include <QString>
typedef struct {
  std::string name;
} InventoryFilename;

Q_DECLARE_METATYPE(InventoryFilename);

class OpenInventory : public QDialog {
  Q_OBJECT
  signals:
    void getInventoryFilename(InventoryFilename &param);
  public:
    OpenInventory(QWidget *parent = nullptr);
  public slots:
    void inventoryFilenameSet();

 private:
    InventoryFilename inventoryFilename;
};

#endif //GEARMASTER_OPENINVENTORY_CLASS
