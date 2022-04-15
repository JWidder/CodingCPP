// LibSolution.cpp : Defines the functions for the static library.
//

#include <algorithm>
#include <vector>

#include "LibSolution.h"

using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
namespace leetcode {
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode* resultList = nullptr;
		ListNode* result = nullptr;
		int overflow = 0;
		int wert1, wert2;
		int wert;

		do {
			if (l1 != nullptr) {
				wert1 = l1->val;
				l1 = l1->next;
			}
			else {
				wert1 = 0;
			}
			if (l2 != nullptr) {
				wert2 = l2->val;
				l2 = l2->next;
			}
			else {
				wert2 = 0;
			}
			wert = wert1 + wert2 + overflow;
			int wertresult = wert % 10;
			overflow = wert / 10;

			if (resultList == nullptr) {
				resultList = new ListNode(wertresult);
				result = resultList;
			}
			else {
				result->next = new ListNode(wertresult);
				result = result->next;
			}

		} while (l1 != nullptr || l2 != nullptr || overflow != 0);

		return resultList;
	}
}