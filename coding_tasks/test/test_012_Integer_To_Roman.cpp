#include "pch.h"

#include "LibSolution.h"

using namespace std;
using namespace leetcode;

TEST(Test_012_Integer_To_Roman,test_input) {

	string test_value = "abba";

	string result = integerToRoman(test_value);
	EXPECT_EQ(result, test_value);
}
