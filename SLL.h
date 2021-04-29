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
      
      if (!headPtr) {
	
	headPtr = new Node<U>;
	headPtr->SSN = item1;
	headPtr->name = item2;
	headPtr->next = nullptr;
	size++;
	return;
	
      }
      
      while (index) {
	
	if (!index->next) {
	  
	  index->next = new Node<U>;
	  index->next->SSN = item1;
	  index->next->name = item2;
	  size++;
	  index->next->next = nullptr;
	  return;

	}
	index = index->next;

      }

      // sets item 1 to the key and item2 to the name
      


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

	index = index->next;

      }

      return nullptr;
      
    }
    
    // remove the node with key value: item1
    bool remove(U item1){
      //implement this method

      Node<U>* index = headPtr,* previousNode = nullptr;
      

      while (index) {
	
	if (index->SSN == item1) {

	  // point to the same thing 
	  if (index == headPtr) {
	    
	    headPtr = index->next;
	    delete index;
	    
	    size--;
	    return true;
	    
	  }

	  if (!index->next) {
	    
	    previousNode->next = nullptr;
	    delete index;
	    size--;
	    return true;

	  }
	  
	  previousNode->next = index->next;
	  delete index;
	  size--;
	  return true;

	}

	previousNode = index;
	index = index->next;	

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


