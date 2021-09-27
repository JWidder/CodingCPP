#include "pch.h"

#include "LibSolution.h"

using namespace std;
using namespace leetcode;

TEST(Test_013_Roman_To_Integer,test_input) {

	string test_value = "abba";

	string result = romanToInteger(test_value);
	EXPECT_EQ(result, test_value);
}
