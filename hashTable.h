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
  
  Node<V>* chain(SLL<V> chain, V val) {

    Node<V>* index = chain.getHeadPtr();

    while (!index) {
      
      if (val == index->SSN) {
	

	return index;

      }

    }

  }

  // chain for insertion
  bool chain(SLL<V> chain, V val, V val2) {


    std::cout << "chaining" << "\n";

    
    Node<V>* index = chain.getHeadPtr();

    while (index->next)
      index = index->next;
    
    Node<V>* newNode = new Node<V>;
    newNode->SSN = val;
    newNode->name = val2;
    newNode->next = nullptr;

    index->next = newNode;

    return true;

  }
    
    // search item in the table
    // if found, return true; otherwise, return false
    bool find(V item){

      for (int i = 0; i < tableSize; ++i) {
	
	if (table[i].headPtr->SSN == item) {
	  return true;
	}

      }
      
      // implement this method
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

      std::cout << key << "\n";


      table[key].insert(item1, item2);

      return true;

    }


  
    // delete the pair whose key value is item
    // if deleted, return true
    // otherwise, return false 
    bool erase(V item){
      // implement this method

      return true;
    }

    // return the total number of nodes in the hash table    
    int getSize(){
      // implement this method

      return 0;
    }

  void display() {
    
    for (int i = 0; i < tableSize; ++i) {
      
      
      std::cout << "index: "  << i << " ";

      
      if (!table[i].getHeadPtr()) {
	std::cout << "EMPTY" << "\n";

      } else {
	table[i].display();
      }

    }


  }

};
