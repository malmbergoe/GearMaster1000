#include "GearMasterMain.h"
#include <iostream>

GearMasterMain::GearMasterMain() {
  continueExecution = true;
};

bool GearMasterMain::run() {
  UserOption choice = mainMenu.interactWithUser();
  continueExecution = handleUserInput(choice);
  return continueExecution;
};

bool GearMasterMain::handleUserInput(UserOption choice) {
  bool output = false;
    switch(choice) {
    case UserOption::LIST_ITEMS:
      printLine("Listing items...");
      inventory.listAllItems();
      output = true;
      break;
    case UserOption::CREATE_NEW_ITEM:
      printLine("Creating new item.");
      inventory.createItem();
      output = true;
      break;
    case UserOption::EXAMINE_ITEM:
      printLine("Examine item...");
      inventory.examineItem();
      output = true;
      break;
    case UserOption::DELETE_ITEM:
      printLine("Delete item...");
      inventory.deleteItem();
      output = true;
      break;
    case UserOption::EXIT:
      printLine("Exit program...");
      output = false;
      break;
    case UserOption::INVALID:
      printLine("Invalid input...");
      output = true;
      break;
    default:
      printLine("Invalid input...");
      output = true;
      break;
  }
  return output;
};


void GearMasterMain::printLine(std::string input) {
  std::cout << input << std::endl;

};

