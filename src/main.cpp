#include <iostream>
#include "src/Version.hpp"

int main (int argc, char **argv) {
  if(argc < 2) {
    std::cout << argv[0] << " GearMaster-1000, version: "
              << APPLICATION_VERSION_MAJOR << "."
              << APPLICATION_VERSION_MINOR << std::endl;
    std::cout << "Usage: " << argv[0] << " number"<< std::endl;
    return 1;
  }
}
