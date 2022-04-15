#include "gtest/gtest.h"


#include "scene.h"

TEST(Test_SceneFactory, dot_90) {
	SceneFactory testFactory = SceneFactory();
	SceneElement *result = testFactory.createElement("test");

	EXPECT_EQ(result, nullptr);
}

