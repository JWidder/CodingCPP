#include "pch.h"

#include "LibSolution.h"

using namespace std;
using namespace leetcode;

TEST(Test_015_3Sum,test_input) {

	string test_value = "abba";

	string result = threeSum(test_value);
	EXPECT_EQ(result, test_value);
}
