#include <iostream>
#include <fstream>
#include "hashTable.h"
#include <string>
#include <time.h>
#include <ctime>

using namespace std;

int count, dcount, rcount;
template <class T>
void print(HashTable<T>*);

int main(int argc, char* argv[]){

  // implement this missing part
  // make the array size inside the hash table is 10007

  
  
  fstream file;

  file.open(argv[1]);

  char charVal;
  string SSN, name;

  clock_t start, end;

  start = clock();

  if (!file.is_open())
    cout << "ERROR" << "\n";
  
  HashTable<string>* tempT = new HashTable<string>(10007);

  while (file >> charVal >> SSN ) {
    
    getline(file, name);
          
    switch (charVal) {
    case 'i': {
                   
      count += tempT->insert(SSN, name) ? 1 : 0;

      break;
    }
    case 'd': {

      dcount += tempT->erase(SSN) ? 1 : 0;
    
      break;
    }
    case 'r': {

      rcount += tempT->find(SSN) ? 1 : 0;
      break;
    }    
    default:
      cout << "ERROR cant be idenI)_ified" << "\n";
      break;
    }

    

    if (!file) {
      break;
    }


  }

  print(tempT);

  
  end = clock();
  float duration = ( end - start ) / (double) CLOCKS_PER_SEC;

  cout<<"elapsed time: "<< duration <<'\n';

    
}

template <class T>
void print(HashTable<T>* dll) {

  // dll->display();

  cout << "The Number of Valid Insertation :" << count << "\n";
  cout << "The Number of Valid Deletions :" << dcount << "\n";
  cout << "The Number of Valid Retrieval :" << rcount << "\n";
  cout << "Item numbers in the array :" << dll->getSize() << "\n";

  cout << "Array Size is :" << dll->getTableSize() <<"\n";


}
