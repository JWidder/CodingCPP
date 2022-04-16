#include "gmock/gmock.h"
#include "gtest/gtest.h"

#include "mock_objects.h"

#include "util.h"
#include "Scene.h"
TEST(test_SceneTracer, NormalMode) {
	using ::testing::NiceMock;
	NiceMock<MockSceneElement> testMockSceneElement1;

	Scene testScene = Scene();
	testScene.addElement(testMockSceneElement1);

	SceneTracer testSceneTracer = SceneTracer(testScene);

	// testSceneTracer.traceLightRay();

	std::vector<SceneElement*>* test = testScene.getSceneElements();
	int result = test->size();

	EXPECT_EQ(result,1);
}

