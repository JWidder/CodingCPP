#include "pch.h"

#include "LibSolution.h"

using namespace std;
using namespace leetcode;
TEST(Test_003_Longest_Substring, Test1) {

	int result = longestUniqueSubstr("abcabcbb");
	EXPECT_EQ(result,3);
}

TEST(Test_003_Longest_Substring, Test2) {

	int result = longestUniqueSubstr("aabbccdd");
	EXPECT_EQ(result, 2);
}