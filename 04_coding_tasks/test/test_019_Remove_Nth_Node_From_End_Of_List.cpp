#include "pch.h"

#include "LibSolution.h"

using namespace std;
using namespace leetcode;

TEST(Test_019_Remove_Nth_Node_From_End_Of_List,test_input) {

	string test_value = "abba";

	string result = removeNthNodeFromEndOfList(test_value);
	EXPECT_EQ(result, test_value);
}
