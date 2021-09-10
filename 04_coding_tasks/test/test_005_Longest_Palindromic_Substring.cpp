#include "pch.h"

#include "LibSolution.h"

using namespace std;
using namespace leetcode;

TEST(Test_005_find_longest_palindrome,pure_even_lenght_palindrom) {

	string test_value = "abba";

	string result = find_LongestPalindrome(test_value);
	EXPECT_EQ(result, test_value);
}
