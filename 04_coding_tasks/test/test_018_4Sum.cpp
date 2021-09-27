#include "pch.h"

#include "LibSolution.h"

using namespace std;
using namespace leetcode;

TEST(Test_018_4Sum,test_input) {

	string test_value = "abba";

	string result = fourSum(test_value);
	EXPECT_EQ(result, test_value);
}
