// LibSolution.cpp : Defines the functions for the static library.
//


#include <string>

#include "LibSolution.h"

using namespace std;

/*
Given a string s, find the length of the longest substring without repeating characters.

Task:
	https://leetcode.com/problems/longest-substring-without-repeating-characters/

Solution:
	https://www.geeksforgeeks.org/length-of-the-longest-substring-without-repeating-characters/
	https://www.baeldung.com/java-longest-substring-without-repeated-characters
*/
namespace leetcode {
	int lengthOfLongestSubstring(string s) {
		char old;
		int count = 1;

		old = s[0];
		for (auto& ch : s) {
			if (old == ch) {
				count = 1;
			}
			else {
				count++;
			}
			old = ch;
		}
		return count;
	}
}