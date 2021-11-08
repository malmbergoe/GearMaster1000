#include <QPushButton>
#include <QGridLayout>
#include <QLabel>

#include "gui/OpenInventory.h"
#include "models/Inventory.h"


OpenInventory::OpenInventory (QWidget *parent) : QDialog(parent) {
  setWindowTitle(tr("GearMaster - 1000"));

  QGridLayout *openInventoryLayout = new QGridLayout();

  QLabel *dialogText = new QLabel(this);
  dialogText->setText("Welcome to GearMaster 1000.\nPlease either create a new inventory or open an existing one.");
  dialogText->setAlignment(Qt::AlignCenter);
  openInventoryLayout->addWidget(dialogText, 0, 0);

  QGridLayout *buttonRow = new QGridLayout();
  QPushButton *createNew = new QPushButton("&Create New");
  buttonRow->addWidget(createNew, 1, 0);
  connect(createNew, &QPushButton::clicked, this, &OpenInventory::inventoryFilenameSet);
  
  QPushButton *openExisting = new QPushButton("&Open Existing");
  buttonRow->addWidget(openExisting, 1, 1);
  connect(openExisting, &QPushButton::clicked, this, &OpenInventory::accept);

  QPushButton *exit = new QPushButton("&Exit");
  buttonRow->addWidget(exit, 1, 2);

  connect(exit, &QPushButton::clicked, this, &OpenInventory::reject);
  
  openInventoryLayout->addLayout(buttonRow, 1, 0);
  this->setLayout(openInventoryLayout);
};

void OpenInventory::inventoryFilenameSet(){
  Inventory inventory {"sasha"};
  emit getInventoryFilename(inventory);
  emit accept();
}

