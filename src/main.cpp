#include <iostream>
#include "src/Version.h"
#include "GearMasterMain.h"

int main (int argc, char **argv) {
  GearMasterMain mainApp;
  bool applicationRunning = true;

  while(applicationRunning) {
    applicationRunning = mainApp.run();
  }

}
