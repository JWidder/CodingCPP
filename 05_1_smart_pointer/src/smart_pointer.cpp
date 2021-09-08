#include <iostream>
#include <memory>

#include "test_class.h"

using namespace std;

using std::cout;
using std::endl;

void asSmartPointerGood(std::shared_ptr<int>& shr){
  std::cout << "shr.use_count(): " << shr.use_count() << endl;  // (3)
  shr.reset(new int(2011));                                     // (5)
  cout << "shr.use_count(): " << shr.use_count() << endl;       // (4)
}

void asSmartPointerBad(std::shared_ptr<int>& shr){
  // doSomethingWith(*shr);
  *shr += 19;
}

int main(){
  
  cout << endl;
  
  auto pointerOne = make_shared<TestClass>(1);
  cout << "firSha.use_count(): " << pointerOne.use_count() << endl; // (1)
  auto pointerTwo = pointerOne;
  cout << "firSha.use_count(): " << pointerTwo.use_count() << endl; // (1)

  pointerOne.reset(new TestClass(2));
  pointerTwo.reset(new TestClass(3));

  pointerOne = pointerTwo;

  pointerOne.reset();
  pointerTwo.reset();

  auto firSha = std::make_shared<int>(1998);
  cout << "firSha.use_count(): " << firSha.use_count() << endl; // (1)
  auto secSha = firSha;
  cout << "firSha.use_count(): " << firSha.use_count() << endl; // (1)
  


  cout << endl;
  
  asSmartPointerGood(firSha);                                   // (2)

  *secSha = 2;
  *firSha = 1;
  secSha = firSha;

  firSha.reset(new int(2));

  cout << endl;
  
  cout << "*firSha: " << *firSha << endl;
  cout << "firSha.use_count(): " << firSha.use_count() << endl;
  
  cout << endl;
  
  cout << "*secSha: " << *secSha << endl;
  cout << "secSha.use_count(): " << secSha.use_count() << endl;
  
  cout << endl;
  
  asSmartPointerBad(secSha);                                    // (6)
  cout << "*secSha: " << *secSha << endl;
  
  cout << endl;
  
}