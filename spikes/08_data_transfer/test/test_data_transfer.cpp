#include "gtest/gtest.h"
#include "cpp_template_lib.h"

TEST(ExampleTests,DemonstrateGTestMacros) {
	TestClass test = TestClass(2);

	int wert = test.test_out(2);
	EXPECT_EQ(4, wert);
}

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}