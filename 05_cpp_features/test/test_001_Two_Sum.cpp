#include "pch.h"

#include "LibSolution.h"

using namespace std;
using namespace leetcode;

TEST(Test_001_Two_Sum, Test1) {
  vector<int> testIn = vector<int>();
  
  testIn.push_back(21);
  testIn.push_back(3);
  testIn.push_back(6);
  testIn.push_back(12);
  testIn.push_back(13);
  testIn.push_back(20);
  testIn.push_back(1);

  vector<int> test = twoSum(testIn, 15);

  EXPECT_EQ(test.size(), 2);
  EXPECT_EQ(test[0], 1);
  EXPECT_EQ(test[1], 3);
}

TEST(Test_001_Two_Sum, Test2) {
	vector<int> testIn = vector<int>();

	testIn.push_back(3);
	testIn.push_back(2);
	testIn.push_back(4);

	vector<int> test = twoSum(testIn, 6);

	EXPECT_EQ(test.size(), 2);
	EXPECT_EQ(test[0], 1);
	EXPECT_EQ(test[1], 2);
}

TEST(Test_001_Two_Sum, Test3) {
	vector<int> testIn = vector<int>();

	testIn.push_back(3);
	testIn.push_back(3);

	vector<int> test = twoSum(testIn, 6);

	EXPECT_EQ(test.size(), 2);
	EXPECT_EQ(test[0], 0);
	EXPECT_EQ(test[1], 1);
}