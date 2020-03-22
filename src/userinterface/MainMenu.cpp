#include "userinterface/MainMenu.h"
#include <string>
#include <iostream>

UserOption MainMenu::interactWithUser() {
  static bool firstRun = true;
  if(firstRun){
    clearScreen();
    printMenu();
    firstRun = false;
  }
  
  UserOption choice = getInputFromUser();
  clearScreen();
  printMenu();
  return choice;
};
