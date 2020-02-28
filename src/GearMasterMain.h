#include <string>
#include "Inventory.h"

#include "userinterface/MainMenu.h"

class GearMasterMain {
public:
  GearMasterMain();
  bool run();

private:
  bool continueExecution;
  Inventory inventory;
  MainMenu mainMenu;

  void printLine(std::string input);
  bool handleUserInput(UserOption choice);
};
