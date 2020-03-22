#ifndef GEARMASTER_GEARMASTERMAIN_CLASS
#define GEARMASTER_GEARMASTERMAIN_CLASS
#include <string>
#include <memory>

class Inventory;
class MainMenu;
enum class UserOption;

class GearMasterMain {
public:
  GearMasterMain();
  bool run();

private:
  bool continueExecution;
  std::shared_ptr<Inventory> inventory;
  std::shared_ptr<MainMenu> mainMenu;

  void printLine(std::string input);
  bool handleUserInput(UserOption choice);
};
#endif
