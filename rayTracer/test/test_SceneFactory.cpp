#include "gtest/gtest.h"

#include "util.h"

TEST(Test_SceneFactory, dot_00) {
	Dir3D in1 = Dir3D(1.0, 0.0, 0.0);
	Dir3D in2 = Dir3D(1.0, 0.0, 0.0);
	double result = dot(&in1, &in2);

	EXPECT_EQ(result,1.0);
}

TEST(Test_SceneFactory, dot_90) {
	Dir3D in1 = Dir3D(0.0, 1.0, 0.0);
	Dir3D in2 = Dir3D(1.0, 0.0, 0.0);
	double result = dot(&in1, &in2);

	EXPECT_EQ(result, 0.0);
}

