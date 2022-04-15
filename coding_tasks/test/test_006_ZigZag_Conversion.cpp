#include "pch.h"

#include "LibSolution.h"

using namespace std;
using namespace leetcode;

TEST(Test_006_convert_zigzag,BASIC_CONVERSION) {

	string result = convert_zigzag("",1);
	EXPECT_EQ(result, " ");
}

