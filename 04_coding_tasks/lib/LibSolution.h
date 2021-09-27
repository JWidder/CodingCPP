#pragma once

#include <vector>
#include <string>

namespace leetcode {
	/* 1 */ std::vector<int> twoSum(std::vector<int>& nums, int target);

	struct ListNode {
		int val;
		ListNode* next;
		ListNode() : val(0), next(nullptr) {}
		ListNode(int x) : val(x), next(nullptr) {}
		ListNode(int x, ListNode* next) : val(x), next(next) {}
	};
	/* 2 */ ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);

	/* 3 */ int lengthOfLongestSubstring(std::string s);
	/* 4 */ double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2);

	/* 6 */ std::string convert_zigzag(std::string s, int numRows);

	/* 9 */ std::string find_LongestPalindrome(std::string s);

	/* 11 */ int find_containerWithMostWater(int a[], int len);
	/* 12 */ std::string integerToRoman(std::string s);
	/* 13 */ std::string romanToInteger(std::string s);
	/* 14 */ std::string longestCommonPrefix(std::string s);
	/* 15 */ std::vector<std::vector<int>> threeSum(std::vector<int>& nums);
	/* 16 */ std::string threeSumClosest(std::string s);
	/* 17 */ std::string letterCombinationsOfAPhoneNumber(std::string s);
	/* 18 */ std::string fourSum(std::string s);
	/* 19 */ std::string removeNthNodeFromEndOfList(std::string s);
	/* 20 */ std::string validParentheses(std::string s);
	/* 21 */ std::string find_mergeTwoSortedLists(std::string s);

	std::string find_xxx_yyy(std::string s);
}