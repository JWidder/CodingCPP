#include "pch.h"

#include "LibSolution.h"

using namespace std;
using namespace leetcode;

TEST(Test_020_Valid_Parentheses,test_input) {

	string test_value = "abba";

	string result = validParentheses(test_value);
	EXPECT_EQ(result, test_value);
}
