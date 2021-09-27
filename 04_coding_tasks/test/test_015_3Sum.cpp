#include <vector>

#include "pch.h"
#include "LibSolution.h"

using namespace std;
using namespace leetcode;

TEST(Test_015_3Sum,test_input) {

	auto test_value = std::vector<vector<int>>();

	std::vector<vector<int>> result = threeSum(vector<int>());
	EXPECT_EQ(result, test_value);
}
