#include <iostream>

#include "cpp_template_lib.h"

#include <vector>

using namespace std;

void testFunktionReference(TestClass &inTestClass)
{
	inTestClass.test_out(2);
}

void testFunktionCopy(TestClass inTestClass)
{
	inTestClass.test_out(2);
}

void testFunktionPointer(TestClass *inTestClass)
{
	inTestClass->test_out(3);
}


int main(){
  
	cout << endl;
  
	TestClass test = TestClass(2);
	
	test.test_out(1);

	testFunktionReference(test);
	testFunktionCopy(test);
	testFunktionPointer(&test);

	test.test_out(3);

	TestClass *testPointer = new TestClass(3);
	testPointer->test_out(3);

	std::cout << "Zuweisung: " << std::endl;
	TestClass newClass = test;
	newClass.test_out(4);

	vector<TestClass> v;
	v.push_back(TestClass(25));
	v.push_back(TestClass(75));

}
