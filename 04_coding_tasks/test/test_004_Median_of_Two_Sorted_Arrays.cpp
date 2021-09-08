#include "pch.h"

#include "LibSolution.h"

using namespace std;
using namespace leetcode;
TEST(Test_004_find_Median_Sorted_Arrays,Two_Array_Two_Two_Elements) {

	std::vector<int> nums1 = { 1, 3 };
	std::vector<int> nums2 = { 2, 5 };

	double result = findMedianSortedArrays(nums1,nums2);
	EXPECT_EQ(result, 2.5);
}

TEST(Test_004_find_Median_Sorted_Arrays, Two_Array_Three_Two_Elements) {

	std::vector<int> nums1 = { 1, 3 ,6 };
	std::vector<int> nums2 = { 2, 5 };

	double result = findMedianSortedArrays(nums1, nums2);
	EXPECT_EQ(result, 3.0);
}

TEST(Test_004_find_Median_Sorted_Arrays, Two_Array_Two_One_Elements) {

	std::vector<int> nums1 = { 1, 3 };
	std::vector<int> nums2 = { 2 };

	double result = findMedianSortedArrays(nums1, nums2);
	EXPECT_EQ(result, 2.0);
}

TEST(Test_004_find_Median_Sorted_Arrays, Two_Array_Two_Two_Identical_Elements) {

	std::vector<int> nums1 = { 0 , 0 };
	std::vector<int> nums2 = { 0 , 0 };

	double result = findMedianSortedArrays(nums1, nums2);
	EXPECT_EQ(result, 0.0);
}

TEST(Test_004_find_Median_Sorted_Arrays, Two_Array_Empty_One_Elements) {

	std::vector<int> nums1 = { };
	std::vector<int> nums2 = { 1 };

	double result = findMedianSortedArrays(nums1, nums2);
	EXPECT_EQ(result, 1.0);
}

TEST(Test_004_find_Median_Sorted_Arrays, Two_Array_Onw_Empty_Elements) {

	std::vector<int> nums1 = { 2 };
	std::vector<int> nums2 = {  };

	double result = findMedianSortedArrays(nums1, nums2);
	EXPECT_EQ(result, 2.0);
}