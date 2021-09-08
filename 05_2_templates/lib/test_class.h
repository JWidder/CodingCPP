#pragma once

#include <iostream>

#include "test_class.h"

class TestClass {

private:
	int wert;

public:

	TestClass(int in) {
		wert = in;
		std::cout << "Basic Contructor:" << wert << std::endl;
	}

	TestClass(const TestClass& old) {
		wert = old.wert;
		std::cout << "Copy Contructor" << wert << std::endl;
	}

	~TestClass() {
		std::cout << "Desctructor" << wert << std::endl;
	}
};

class test_class
{
};

