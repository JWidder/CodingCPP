#include "gmock/gmock.h"
#include "gtest/gtest.h"

#include "mock_objects.h"

#include "Scene.h"

#include "util.h"

namespace testing {
	TEST(test_Scene, TEST_MOCK) {
		using ::testing::NiceMock;

		NiceMock<MockSceneElement> testMockSceneElement1;
		NiceMock<MockSceneElement> testMockSceneElement2;
		NiceMock<MockSceneElement> testMockSceneElement3;
		NiceMock<MockSceneElement> testMockSceneElement4;
		NiceMock<MockSceneElement> testMockSceneElement5;
		NiceMock<MockSceneElement> testMockSceneElement6;
		NiceMock<MockSceneElement> testMockSceneElement7;
		MockSphere3D testMockSceneElement;

		Scene testScene = Scene();

		testScene.addElement(testMockSceneElement1);
		testScene.addElement(testMockSceneElement2);
		testScene.addElement(testMockSceneElement3);
		testScene.addElement(testMockSceneElement4);
		testScene.addElement(testMockSceneElement5);
		testScene.addElement(testMockSceneElement6);
		testScene.addElement(testMockSceneElement7);

		//LightRay testRay = LightRay(Point3D(0.0, 0.0, 0.0), Dir3D(1.0, 0.0, 0.));

		//ON_CALL(testMock, doesIntersectRay).WillByDefault(Return(true));

		//bool test = testMock.doesIntersectRay(testRay);

		std::vector<SceneElement *> *test = testScene.getSceneElements();
		EXPECT_EQ(7, test->size());
	}
}