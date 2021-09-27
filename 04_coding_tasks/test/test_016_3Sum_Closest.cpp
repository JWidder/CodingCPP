#include "pch.h"

#include "LibSolution.h"

using namespace std;
using namespace leetcode;

TEST(Test_016_3Sum_Closest,test_input) {

	string test_value = "abba";

	string result = threeSumClosest(test_value);
	EXPECT_EQ(result, test_value);
}
