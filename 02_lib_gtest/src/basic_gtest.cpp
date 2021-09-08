#include <iostream>

#include "basic_gtest_lib.h"

using namespace std;

int main() {
	cout << "hello world" << endl;
	test_lib test = test_lib();

	test.foo();

	return 0;
}