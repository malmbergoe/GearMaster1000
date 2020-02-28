#include "Menu.h"
#include "UserOption.h"

class MainMenu : public Menu<UserOption>{
public:
  void printMenu() {
    printLine("Welcome to GearMaster-1000");
    printLine("Please choose one of the followin options by typing in that number:\n");
    printLine("1. List all items");
    printLine("2. Create a new item");
    printLine("3. Examine an item");
    printLine("4. Delete an item");
    printLine("5. Exit program");
    printLine("");
  };

  UserOption interactWithUser();
};
