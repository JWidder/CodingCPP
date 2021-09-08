#include <iostream>
#include <memory>

#include "cpp_template_lib.h"

using namespace std;

int main(){
  
	cout << endl;
  
	TestClass test = TestClass(2);
	
	test.test_out(2);
}