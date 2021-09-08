#include "pch.h"

#include "LibSolution.h"

using namespace std;
using namespace leetcode;
TEST(Test_003_Longest_Substring, Test1) {

	int result = lengthOfLongestSubstring("abcabcbb");
	EXPECT_EQ(result,3);
}