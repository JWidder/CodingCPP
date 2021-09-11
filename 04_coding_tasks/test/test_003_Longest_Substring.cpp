#include "pch.h"

#include "LibSolution.h"

using namespace std;
using namespace leetcode;

TEST(Test_003_Longest_Substring, Test_one_char_string) {

	int result = lengthOfLongestSubstring("a");
	EXPECT_EQ(result, 1);
}

TEST(Test_003_Longest_Substring, Test_perfect_string) {

	int result = lengthOfLongestSubstring("abcd");
	EXPECT_EQ(result, 4);
}

TEST(Test_003_Longest_Substring, Test_wo_nested_repetitions) {

	int result = lengthOfLongestSubstring("abcaaabcbb");
	EXPECT_EQ(result, 3);
}

TEST(Test_003_Longest_Substring, Test_with_nested_repetitions) {

	int result = lengthOfLongestSubstring("abcabcdbb");
	EXPECT_EQ(result, 4);
}

TEST(Test_003_Longest_Substring, Test_with_one_letter) {

	int result = lengthOfLongestSubstring("bbbbb");
	EXPECT_EQ(result, 1);
}

TEST(Test_003_Longest_Substring, Test_with_empty_string) {

	int result = lengthOfLongestSubstring("");
	EXPECT_EQ(result, 0);

}