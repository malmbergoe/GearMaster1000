#include "Inventory.h"
#include <iostream>
#include <sstream>
#include "userinterface/EditOption.h"


void Inventory::createItem() {
  std::cout << "creating item, fuck yeah!!" << std::endl;
  std::cout << "what is the name of the new item?" << std::endl;
  std::string nameInput;
  getline(std::cin, nameInput);
  std::cout << "what is the weight (in grams) of the new item?" << std::endl;
  std::string weightInput;
  getline(std::cin, weightInput);
  int weight;
  std::stringstream(weightInput) >> weight;
  
  Item item;
  item.name = nameInput;
  item.weight_grams = weight;
  itemContainer[nameInput] = item;
}

void Inventory::deleteItem() {
  std::cout << "what is the name of the item that you want to remove?" << std::endl;
  std::string nameInput;
  getline(std::cin, nameInput);
  if(itemContainer.find(nameInput) == itemContainer.end()){
    std::cout << "Unable to find item " << nameInput << ", are you sure it is in the inventory?" << std::endl;
  } else {
    itemContainer.erase(nameInput);
  }
}

void Inventory::listAllItems() {
  std::cout << "Listing all items. Look at all the fucks you can use!" << std::endl;
  if(itemContainer.empty()){
    std::cout << "the list is empty you fool" << std::endl;
  } else {
    std::cout << "there are " << itemContainer.size() << " items in the container" << std::endl;
    std::unordered_map<std::string, Item>::iterator item = itemContainer.begin();
    while(item != itemContainer.end()) {
      std::cout << "item name: " << (*item).second.name << ", item weight: " << (*item).second.weight_grams << std::endl;
    ++item;
    }
  }
}

void Inventory::examineItem() {
  std::cout << "what is the name of the item that you want to investigate closer?" << std::endl;
  std::string itemName;
  getline(std::cin, itemName);
  if(itemContainer.find(itemName) == itemContainer.end()){
    std::cout << "Unable to find item " << itemName << ", are you sure it is in the inventory?" << std::endl;
  } else {
    Item item = itemContainer[itemName];
    std::cout << "name: " << item.name << ", identifier: " << item.identifier << ", description: " << item.description << ", weight: " << item.weight_grams << std::endl;
  }
}

void Inventory::modifyItem() {
  std::cout << "what is the name of the item that you want to modify?" << std::endl;
  std::string itemName;
  getline(std::cin, itemName);
  if(itemContainer.find(itemName) == itemContainer.end()){
    std::cout << "Unable to find item " << itemName << ", are you sure it is in the inventory?" << std::endl;
  } else {
    Item item = itemContainer[itemName];
    std::cout << "editing " << item.name << std::endl;
    bool editComplete = false;
    while(!editComplete){
      printEditMenu();
      EditOption choice = getInputFromUser();
    }
    
  }
}

EditOption Inventory::getInputFromUser(){
  EditOption output = EditOption::INVALID;
  std::string input;
  getline(std::cin, input);
  int validInteger;
  std:: stringstream(input) >> validInteger;
  if(  ((int) EditOption::NAME <= validInteger) && (validInteger <= (int) EditOption::INVALID)){
  } else {
    std::cout << "invalid choice. aborting..." << std::endl;
  }
}

void Inventory::printEditMenu(){
  std::cout << "1. edit name" << std::endl;
  std::cout << "2. edit identifier" << std::endl;
  std::cout << "3. edit description" << std::endl;
  std::cout << "4. edit weight" << std::endl;
}
