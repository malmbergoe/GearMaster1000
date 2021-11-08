#ifndef GEARMASTER_INVENTORY_CLASS
#define GEARMASTER_INVENTORY_CLASS

#include <string>

class Inventory {
  
public:
  Inventory(std::string filename);
  std::string getFilename() const;

private:
  std::string filename;
};

#endif
