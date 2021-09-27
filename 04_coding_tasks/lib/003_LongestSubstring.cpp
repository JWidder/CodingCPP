// LibSolution.cpp : Defines the functions for the static library.
//


#include <string>

#include "LibSolution.h"

using namespace std;

#define ANZ_CHAR 256

/*
Given a string s, find the length of the longest substring without repeating characters.

Task:
	https://leetcode.com/problems/longest-substring-without-repeating-characters/

Solution:
	https://www.geeksforgeeks.org/length-of-the-longest-substring-without-repeating-characters/
	https://www.baeldung.com/java-longest-substring-without-repeated-characters

Solution concept

  Ermittle die L�nge des Fensters ungleicher Buchstaben. Dieses wird begrenzt 
  druch den linken und rechten Rand. 

  rechte Rand:Aktueller Wert des Z�hlers �ber den String. (Counter) 
  linke Rand: Wird immer dann gepr�ft, wenn ein Character mehrfach vorkommt. 
              Ist das erste Vorkommen des Zeichens weiter rechts als der 
			  aktuelle linke Rand, dann wir dieser entsprechend angepasst. 
 */
namespace leetcode {
	int lengthOfLongestSubstring(string str) {
		vector<int> lastOccurence(ANZ_CHAR, -1);
		
		int max_len = 0;
		int left_pos = -1;
		for (int count = 0; count < str.length(); count++) {
			left_pos = std::max(left_pos,lastOccurence[str[count]]);
			max_len = std::max(max_len,count - left_pos);

			lastOccurence[str[count]] = count;
		}
    return max_len;
	}
}