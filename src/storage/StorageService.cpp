#include "storage/StorageService.h"

#include <iostream>

void StorageService::connect(std::string dbName) {
  printdbName(dbName);
}

void StorageService::printdbName(std::string name) {
  std::cout << name << std::endl;
}
