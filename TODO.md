write documentation:
- how to run tests
- how to build
- current capabilities


# integrate to use sqlite
- define the data object to store
- define the interface for saving data objects
  - serializer/deserializer
  - write
  - read
  - delete
  



structure:
data storage (sqlite, textfile, whatever fucknot)
data action layer (implements interface)
data storage object (applies actions to a storage connection, i.e. provides interface)
data object


class StorageService
  void write(Item item)
  Item read()
  void delete(Item item)
  private:
  createTable()
  openConnection();
  closeConnection();


class Serialiser
  String?? serialize(Item)
  Item deserialize(String item)
  prepared statement instead of strings?






#naming the data object
GearItem
Thing
Gear
InventoryItem
Equipment
EquipmentItem


actual things that will/could be managed
tool, clothes, food, gear, shelter, consumables

GearMaster manages "Item"s.
An item always has a name, a weight and a description
Each item is either "equipment" or "consumable"
Items that can be permanently owned are "Equipment"
Items that are used during trips (such as food, fuel, sunscreen etc) are consumables

The "inventory" is a collection of ALL items available.
a "loadout" is a named subset of items from the inventory.








- write some unit tests
- create uml design documentation? (mostly to learn uml)