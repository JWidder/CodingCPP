#include <string>

#include "LibSolution.h"

using namespace std;

/*
Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.
The overall run time complexity should be O(log (m+n)).

Task:
	https://leetcode.com/problems/median-of-two-sorted-arrays/

Solution:

	- add the total number of elements in the both vectors
	- finde median
		- if number is even median is the average of the inner elements
		- if number if odd: median is the middle element.
*/
namespace leetcode {
	double find_median_vector(vector<int>& nums) {
		int size = nums.size();
		if (size % 2 == 0) {
			int wert1 = nums[(size / 2) - 1];
			int wert2 = nums[(size / 2)];
			return (double)(wert1 + wert2) / 2.0;
		}
		else {
			return (nums[size / 2]);
		}
	}

	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
		int size1 = nums1.size();
		int size2 = nums2.size();
		int size = nums1.size() + nums2.size();
		int count = 0;

		// Get iterator
		std::vector<int>::iterator it1 = nums1.begin();
		std::vector<int>::iterator it2 = nums2.begin();

		double result = -1.0;
		int wert1;
		int wert2;
		
		if (size1 == 0){
			result = find_median_vector(nums2);
		}
		else if (size2 == 0) {
			result = find_median_vector(nums1);
		}
		else {
			if (size % 2 == 0) {
				for (count = 0; count <= size / 2; count++) {
					if (it2 != std::end(nums2)) {
						if (*it1 < *it2) {
							wert1 = *it1;
							it1++;
						}
						else {
							wert2 = *it2;
							it2++;
						}
					}
					else {
						wert1 = wert2;
						break;
					}
				}
				result = (double)(wert1 + wert2) / 2.0;
			}
			else {
				for (count = 0; count <= size / 2; count++) {
					if (*it1 < *it2) {
						result = *it1;
						it1++;
					}
					else {
						result = *it2;
						it2++;
					}
				}
			}
		}
		return result;
	}
}