#ifndef GEARMASTER_INVENTORY_CLASS
#define GEARMASTER_INVENTORY_CLASS
#include <unordered_map>
#include <string>
#include "Item.h"

enum class EditOption;


class Inventory {
  
public:
  void createItem();
  void deleteItem();
  void listAllItems();
  void examineItem();
  void modifyItem();

private:
  void printEditMenu();
  std::unordered_map<std::string,Item> itemContainer;
  EditOption getInputFromUser();
};

#endif
