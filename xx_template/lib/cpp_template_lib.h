#pragma once

#include <iostream>

class TestClass {

private:
	int wert;

public:

	TestClass(int in) {
		wert = in;
		std::cout << "Basic Contructor:" << wert << std::endl;
	}

	int test_out(int in){
		std::cout << "Test output" << std::endl;
		return in*2;
	}

};
