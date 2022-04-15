#include "cpp_template_lib.h"

TestClass::TestClass(int in)
{
	wert = in;
	std::cout << "Basic Contructor:" << wert << std::endl;
}

TestClass::TestClass(TestClass& other)
{
	std::cout << "Copy Destructor:" << std::endl;
	this->wert = other.wert;
};

TestClass::TestClass(TestClass&& other) noexcept
{
	std::cout << "Move Constructor" << std::endl;
	this->wert = other.wert;
};


TestClass& TestClass::operator=(TestClass&& other) noexcept
{
	if (this != &other) {
		this->wert = other.wert;
	}
	return *this;
}

TestClass::~TestClass()
{
	std::cout << "Basic Destructor:" << std::endl;
}

int TestClass::test_out(int in) {
	std::cout << "Test output: " << in << std::endl;
	return in * 2;
}
