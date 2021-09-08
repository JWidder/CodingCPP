// LibSolution.cpp : Defines the functions for the static library.
//

#include <algorithm>
#include <vector>

#include "LibSolution.h"

using namespace std;

/*
* https://leetcode.com/problems/two-sum/
* Given an array of integers nums and an integer target, return indices 
* of the two numbers such that they add up to target.
* 
* You may assume that each input would have exactly one solution, and you 
* may not use the same element twice.
* 
* You can return the answer in any order.

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Output: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]

Constraints:

2 <= nums.length <= 104
-109 <= nums[i] <= 109
-109 <= target <= 109
Only one valid answer exists.
*/
namespace leetcode {
	vector<int> twoSum(vector<int>& nums, int target) {

		vector<int>	nums_copy = nums;

		sort(nums_copy.begin(), nums_copy.end());

		int start = 0;
		int end = nums_copy.size() - 1;

		for (int i = end; i > 0; --i)
		{
			auto debug = nums_copy[i];
			if (nums_copy[i] >= target) {
				end = i;
			}
			else
			{
				break;
			}
		}

		for (int i = 0; i < end; i++) {
			int test_summe = nums_copy[start] + nums_copy[end];
			if (test_summe == target) {
				break;
			}
			if (test_summe > target) {
				end--;
			}
			else {
				start++;
			}

		}
		vector<int> result = vector<int>();

		for (int i = 0; i < nums.size(); i++) {
			if (nums[i] == nums_copy[start]) {
				result.push_back(i);
				break;
			}
		}
		for (int i = nums.size() - 1; i > 0; i--) {
			if (nums[i] == nums_copy[end]) {
				result.push_back(i);
				break;
			}
		}

		return result;
	}
}