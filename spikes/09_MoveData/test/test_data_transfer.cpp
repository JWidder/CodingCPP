#include "gtest/gtest.h"
#include "MemoryBlock.h"

TEST(ExampleTests,DemonstrateGTestMacros) {
	EXPECT_EQ(4, 4);
}

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}