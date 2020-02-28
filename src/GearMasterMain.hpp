#include <string>
#include "Inventory.hpp"

#include "userinterface/MainMenu.hpp"

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
