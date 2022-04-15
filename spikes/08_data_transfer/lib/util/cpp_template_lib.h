#pragma once

#include <iostream>

class TestClass {

private:
	int wert;

public:

	TestClass(int in);
	TestClass(TestClass& other);
	TestClass(TestClass&& other) noexcept;
	TestClass& operator=(TestClass&& other) noexcept;
	~TestClass();

	int test_out(int in);
};
