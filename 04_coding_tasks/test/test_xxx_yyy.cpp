#include "pch.h"

#include "LibSolution.h"

using namespace std;
using namespace leetcode;

TEST(Test_xxx_yyy,test_input) {

	string test_value = "abba";

	string result = find_xxx_yyy(test_value);
	EXPECT_EQ(result, test_value);
}
