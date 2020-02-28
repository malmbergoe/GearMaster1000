#include <unordered_map>
#include <string>
#include "Item.hpp"

enum class EditOption;

class Inventory {
  
public:
  void createItem();
  void delevteItem();
  void listAllItems();
  void examineItem();
  void modifyItem();

private:
  void printEditMenu();
  std::unordered_map<std::string,Item> itemContainer;
  EditOption getInputFromUser();
};