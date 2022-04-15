#include "pch.h"

#include "LibSolution.h"

using namespace std;
using namespace leetcode;
TEST(Test_002_Two_Sum, Test1) {

	ListNode *list1 = new ListNode(3);
	list1 = new ListNode(4, list1);
	list1 = new ListNode(2, list1);

	ListNode* list2 = new ListNode(4);
	list2 = new ListNode(6, list2);
	list2 = new ListNode(5, list2);

	auto test = addTwoNumbers(list1, list2);

	EXPECT_EQ(test->val, 7);
	EXPECT_EQ(test->next->val, 0);
	EXPECT_EQ(test->next->next->val, 8);
	EXPECT_EQ(test->next->next->next, nullptr);

}

TEST(Test_002_Two_Sum, Example_2) {

	// Low Digit last
	ListNode* list1 = new ListNode(0);

	ListNode* list2 = new ListNode(0);
	list2 = new ListNode(1, list2);

	auto test = addTwoNumbers(list1, list2);

	// Lower Digit first
	EXPECT_EQ(test->val, 1);
	EXPECT_EQ(test->next->val, 0);
	EXPECT_EQ(test->next->next, nullptr);

}

TEST(Test_002_Two_Sum, Example_3) {

	ListNode* list1 = new ListNode(9);
	list1 = new ListNode(9, list1);
	list1 = new ListNode(9, list1);
	list1 = new ListNode(9, list1);
	list1 = new ListNode(9, list1);
	list1 = new ListNode(9, list1);
	list1 = new ListNode(9, list1);

	ListNode* list2 = new ListNode(9);
	list2 = new ListNode(9, list2);
	list2 = new ListNode(9, list2);
	list2 = new ListNode(9, list2);

	auto test = addTwoNumbers(list1, list2);

	EXPECT_EQ(test->val, 8);
	test = test->next;
	EXPECT_EQ(test->val, 9);
	test = test->next;
	EXPECT_EQ(test->val, 9);
	test = test->next;
	EXPECT_EQ(test->val, 9);
	test = test->next;
	EXPECT_EQ(test->val, 0);
	test = test->next;
	EXPECT_EQ(test->val, 0);
	test = test->next;
	EXPECT_EQ(test->val, 0);
	test = test->next;
	EXPECT_EQ(test->val, 1);

}

TEST(Test_002_Two_Sum, Test4) {

	ListNode* list1 = new ListNode(7);
	list1 = new ListNode(4, list1);
	list1 = new ListNode(6, list1);

	ListNode* list2 = new ListNode(7);
	list2 = new ListNode(6, list2);
	list2 = new ListNode(6, list2);

	auto test = addTwoNumbers(list1, list2);

	EXPECT_EQ(test->val, 2);
	EXPECT_EQ(test->next->val, 1);
	EXPECT_EQ(test->next->next->val, 5);
	EXPECT_EQ(test->next->next->next->val, 1);
	EXPECT_EQ(test->next->next->next->next, nullptr);

}

