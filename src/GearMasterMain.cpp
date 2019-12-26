#include "GearMasterMain.hpp"
#include <iostream>
#include <sstream>

GearMasterMain::GearMasterMain() {
  continueExecution = true;
};

bool GearMasterMain::run() {
  static bool firstRun = true;
  if(firstRun){
    clearScreen();
    printStartMenu();
    firstRun = false;
  }
  
  UserOption choice = getInputFromUser();
  clearScreen();
  printStartMenu();
  continueExecution = handleUserInput(choice);
  return continueExecution;
};

bool GearMasterMain::handleUserInput(UserOption choice) {
  bool output = false;
    switch(choice) {
    case UserOption::LIST_ITEMS:
      printLine("Listing items...");
      output = true;
      break;
    case UserOption::CREATE_NEW_ITEM:
      printLine("Creating new item.");
      output = true;
      break;
    case UserOption::EXAMINE_ITEM:
      printLine("Examine item...");
      output = true;
      break;
    case UserOption::DELETE_ITEM:
      printLine("Delete item...");
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

GearMasterMain::UserOption GearMasterMain::getInputFromUser() {
  UserOption output = UserOption::INVALID;

  std::string userInput;
  getline(std::cin, userInput);
  if (validateInput(userInput)) {
    int validInteger;
    std::stringstream(userInput) >> validInteger;
    output = static_cast<UserOption>(validInteger);
  }
  return output;
};

bool GearMasterMain::validateInput(std::string input) {
  int validInteger;
  std::stringstream(input) >> validInteger;
  printLine(std::to_string(validInteger));
  return (UserOption::LIST_ITEMS <= validInteger) && (validInteger <= UserOption::INVALID);
};

void GearMasterMain::printStartMenu() {
  printLine("Welcome to GearMaster-1000");
  printLine("Please choose one of the followin options by typing in that number:\n");
  printLine("1. List all items");
  printLine("2. Create a new item");
  printLine("3. Examine an item");
  printLine("4. Delete an item");
  printLine("5. Exit program");
  printLine("");
};

void GearMasterMain::printLine(std::string input) {
  std::cout << input << std::endl;
};

void GearMasterMain::clearScreen() {
  std::cout << "\x1B[2J\x1B[H";
}
