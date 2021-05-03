#include <iostream>
#include <fstream>
#include "hashTable.h"
#include <string>
#include <time.h>
#include <ctime>

using namespace std;

int main(int argc, char* argv[]){

  // implement this missing part
  // make the array size inside the hash table is 10007

  fstream file;

  file.open(argv[1]);

  char charVal;
  string SSN, name;

  if (!file.is_open())
    cout << "ERROR" << "\n";
  
  HashTable<string>* tempT = new HashTable<string>(15);

  while (file >> charVal >> SSN ) {
    
    getline(file, name);

          tempT->insert(SSN, name);


    // switch (charVal) {
    // case 'i': {
                   


    //   break;
    // }
    // case 'd': {

    
    //   break;
    // }
    // case 'r': {
    
    //   break;
    // }    
    // default:
    //   cout << "ERROR cant be idenI)_ified" << "\n";
    //   break;
    // }

    

    // if (!file) {
    //   break;
    // }


  }

  tempT->display();
    
}
