#include <string>

class GearMasterMain {
public:
  GearMasterMain();
  bool run();

private:
  bool continueExecution;

  void printStartMenu();
  void printLine(std::string input);
  void clearScreen();
  bool validateInput(std::string input);
  
  enum UserOption {
    LIST_ITEMS = 1,
    CREATE_NEW_ITEM,
    EXAMINE_ITEM,
    DELETE_ITEM,
    EXIT,
    INVALID};
  
  UserOption getInputFromUser();
  bool handleUserInput(UserOption choice);
};
