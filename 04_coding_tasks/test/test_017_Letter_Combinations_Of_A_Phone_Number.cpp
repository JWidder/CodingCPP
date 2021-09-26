#include "pch.h"

#include "LibSolution.h"

using namespace std;
using namespace leetcode;

TEST(Test_017_Letter_Combinations_Of_A_Phone_Number,test_input) {

	string test_value = "abba";

	string result = letterCombinationsOfAPhoneNumber(test_value);
	
	EXPECT_EQ(result, test_value);
}
