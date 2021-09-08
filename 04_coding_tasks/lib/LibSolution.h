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
}