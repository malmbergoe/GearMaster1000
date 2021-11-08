#ifndef GEARMASTER_STORAGESERVICE_CLASS
#define GEARMASTER_STORAGESERVICE_CLASS

#include <string>

class StorageService {
  public:
  void connect(std::string dbName);
  private:
  void printdbName(std::string name);
};



#endif //GEARMASTER_STORAGESERVICE_CLASS
