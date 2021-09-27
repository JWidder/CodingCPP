#include "pch.h"

#include "LibSolution.h"

using namespace std;
using namespace leetcode;

TEST(Test_Find_Container_with_Most_Water,test_input) {

	int A[] = { 1, 5, 4, 3 };
	int test_value = 0;

	int result = find_containerWithMostWater(A,4);
	EXPECT_EQ(result, test_value);
}
