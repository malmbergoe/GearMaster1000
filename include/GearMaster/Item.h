#ifndef GEARMASTER_ITEM_CLASS
#define GEARMASTER_ITEM_CLASS
#include <string>
class Item {
public:
  std::string name;
  std::string identifier;
  std::string description;
  int weight_grams;
  /*
item last used
entry last updated
comments
log entries
picture
tags
category
price
place from where item was bought
item acquired
*/
};

#endif
