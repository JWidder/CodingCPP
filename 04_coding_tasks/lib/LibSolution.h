#pragma once

#include <vector>
#include <string>

namespace leetcode {
	std::vector<int> twoSum(std::vector<int>& nums, int target);

	struct ListNode {
		int val;
		ListNode* next;
		ListNode() : val(0), next(nullptr) {}
		ListNode(int x) : val(x), next(nullptr) {}
		ListNode(int x, ListNode* next) : val(x), next(next) {}
	};
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);

	int lengthOfLongestSubstring(std::string s);
	double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2);
	std::string find_LongestPalindrome(std::string s);
	int find_containerWithMostWater(int a[],int len);
	std::string integerToRoman(std::string s);
	std::string romanToInteger(std::string s);
	std::string longestCommonPrefix(std::string s);
	std::string threeSum(std::string s);
	std::string threeSumClosest(std::string s);
	std::string letterCombinationsOfAPhoneNumber(std::string s);
	std::string fourSum(std::string s);
	std::string removeNthNodeFromEndOfList(std::string s);
	std::string validParentheses(std::string s);
	std::string find_mergeTwoSortedLists(std::string s);

	std::string find_xxx_yyy(std::string s);

	std::string convert_zigzag(std::string s, int numRows);
}