#include <iostream>
#include "SLL.h"
using  namespace  std;

template <class V>
class HashTable {
    int tableSize; // table size
    
    SLL<V>* table;
    
    public:
    // default constructor, which uses default table size 3
    HashTable(){
        tableSize = 3;
        table = new SLL<V>[tableSize];
    }
    
    // constructor, which use size as the table size
    HashTable(int size){

      table = new SLL<V>[size];
      tableSize = size;

      // implement this method
    }
    
    // search item in the table
    // if found, return true; otherwise, return false
    bool find(V item){

      int item_int = stoi(item);

      int key = item_int % tableSize;
      
      if (table[key].search(item)) {
	return true;
      } 

      return false;
      
    }
    
    // insert (item1, item2) to the table
    // use item1 as the key
    // if inserted, return true
    // otherwise, return false
    bool insert(V item1, V item2){
      //implement this method

      

      int item_int = stoi(item1);
      
      int key = item_int % tableSize;
      
      // return 0;

      // comment std::cout << key << "\n";


      return table[key].insert(item1, item2);
      
    }


  
    // delete the pair whose key value is item
    // if deleted, return true
    // otherwise, return false 
    bool erase(V item){
      // implement this method

      int item_int = stoi(item);
      
      int key = item_int % tableSize;

      return table[key].remove(item);
      
    }

    // return the total number of nodes in the hash table    
    int getSize(){
      // implement this method

      int size = 0;

      for (int i = 0; i < tableSize; ++i) {

	if (table[i].getHeadPtr())
	  size += table[i].getSize();  
	
      }

      
      return size;
    }

  int getTableSize() {
    return tableSize;
  }

  void display() {
    
    for (int i = 0; i < tableSize; ++i) {
                        
      if (!table[i].getHeadPtr()) {
	// comment std::cout << "EMPTY" << "\n";

      } else {
	table[i].display();
      }

    }

    // commentstd::cout << "Size is: " << tableSize << "\n";

  }

};
