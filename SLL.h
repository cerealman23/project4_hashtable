#include <iostream>
#include "Node.h"
using  namespace  std;

template <class U>
class SLL {
    
    Node<U> * headPtr;
    int size;
    
    public:
    // default constructor
    SLL(){
      //implement this method

      headPtr = nullptr;
      size = 0;

    }

    // destructor    
    ~SLL(){
      // implement this method

      Node<U> index = headPtr;

      while (index->next) {
	
	index = index->next;

	delete index;

      }
      
    }
    
    Node<U>* getHeadPtr(){
        return headPtr;
    }
    
    // insert (item1, item2) to the list
    void insert(U item1, U item2){
      //implement this method

      Node<U>* index = headPtr;
            
      while (index) {
	
	index = index->next;

      }

      // sets item 1 to the key and item2 to the name
      if (!headPtr) {
	
	headPtr = new Node<U>;
	
      }

      if (!index) {
	headPtr->SSN = item1;
	headPtr->name = item2;
	headPtr->next = nullptr;
	size++;
      }

    }
    
    // if find the item1 value, return the pointer to the node
    // otherwise, return nullptr
    Node<U>* search(U item1){
      //implement this method

      Node<U>* index = headPtr;
      
      while (index) {
	
	if (index->SSN == item1) {
	  
	  return index;

	}

      }

      return nullptr;
      
    }
    
    // remove the node with key value: item1
    bool remove(U item1){
      //implement this method

      Node<U>* index = headPtr;

      if (!index) {
	
	headPtr = index->next;
	--size;
	delete index;

      }

      while (index) {
	
	if (index->next->SSN == item1) {
	  	  
	  Node<U>* temp = index->next;
	  index->next = index->next->next;
	  delete temp;
	  --size;
	  return true;

	}

      }

      return false;

    }
    
    int getSize(){
        
        return size;
    }
    
    // display the SSN values of each node in the linked list
    void display(){
        Node<U>* temp;
        temp = headPtr;
        while (temp!= nullptr) {
            cout << temp->SSN << endl;
            temp = temp->next;
        }
    }
};


