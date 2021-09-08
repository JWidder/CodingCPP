#include "gtest/gtest.h"
#include "test_lib.h"

TEST(ExampleTests,DemonstrateGTestMacros) {
	test_lib test = test_lib();

	int wert = test.addValues(2, 2);
	EXPECT_EQ(4, wert);
}

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}