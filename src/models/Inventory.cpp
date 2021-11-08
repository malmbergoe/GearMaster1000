#include "models/Inventory.h"

Inventory::Inventory(std::string filename) {
  this->filename = filename;
}

 std::string Inventory::getFilename() const {
  return this->filename;
};
