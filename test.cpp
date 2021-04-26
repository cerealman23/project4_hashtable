#include <iostream>
#include <string>
#include "SLL.h"

using namespace std;

int main(){
  Node<string>* temp = new Node<string>;
  SLL<string>* tempSLL = new SLL<string>;
  
  tempSLL->insert("amcolm", "huh");

  
  tempSLL->insert("wowano", "huhh");
  tempSLL->insert("matt", "huhhh");

  tempSLL->remove("matt");
  
  tempSLL->insert("massah", "huhhhh");

  cout << tempSLL->getSize() << "\n";


  tempSLL->display();
  
  //HashTable<string>* tempT = new HashTable<string>(10007);
}
