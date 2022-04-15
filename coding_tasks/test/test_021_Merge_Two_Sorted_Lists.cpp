#include "pch.h"

#include "LibSolution.h"

using namespace std;
using namespace leetcode;

TEST(Test_021_Merge_Two_Sorted_Lists,test_input) {

	string test_value = "abba";

	string result = find_mergeTwoSortedLists(test_value);
	EXPECT_EQ(result, test_value);
}
