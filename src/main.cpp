#include <iostream>
#include "src/Version.hpp"
#include "GearMasterMain.hpp"

int main (int argc, char **argv) {
  GearMasterMain mainApp;
  bool applicationRunning = true;

  while(applicationRunning) {
    applicationRunning = mainApp.run();
  }

}
