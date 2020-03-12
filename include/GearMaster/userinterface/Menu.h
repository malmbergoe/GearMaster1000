#ifndef GEARMASTER_MENU_CLASS
#define GEARMASTER_MENU_CLASS
#include <string>
#include <iostream>
#include <sstream>

template <typename T>
class Menu {
  protected:
    void clearScreen() {
      std::cout << "\x1B[2J\x1B[H";
    };

    void printLine(std::string input) {
      std::cout << input << std::endl;
    };

    bool validateInput(std::string input) {
      int validInteger;
      std::stringstream(input) >> validInteger;
      printLine(std::to_string(validInteger));
      return ((int) T::FIRST <= validInteger) && (validInteger <= (int) T::LAST);
    };

  public:
    T getInputFromUser() {
      T output = T::INVALID;
  
      std::string userInput;
      getline(std::cin, userInput);
      if (validateInput(userInput)) {
         int validInteger;
        std::stringstream(userInput) >> validInteger;
        output = static_cast<T>(validInteger);
      }
      return output;
    };
};
#endif
