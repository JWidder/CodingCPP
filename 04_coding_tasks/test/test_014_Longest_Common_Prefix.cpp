#include "pch.h"

#include "LibSolution.h"

using namespace std;
using namespace leetcode;

TEST(Test_014_Longest_Common_Prefix,test_input) {

	string test_value = "abba";

	string result = longestCommonPrefix(test_value);
	EXPECT_EQ(result, test_value);
}
