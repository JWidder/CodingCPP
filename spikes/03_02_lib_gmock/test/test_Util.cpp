#include "gtest/gtest.h"
#include "gmock/gmock.h"

using namespace std;
using ::testing::AtLeast;
using ::testing::Return;
using ::testing::_;

#include "ray.h"

class MockRay : public ray {
public:
	MOCK_METHOD2(addValue, int(int inA, int inB));
};
TEST(Test_Util_Ray, dot_00) {
	// Arrange
	ray testRay = ray();

	// Act
	int result = testRay.addValue(12, 12);

	// Assert
	EXPECT_EQ(result,24);
}

TEST(Test_Util_Ray, using_mock) {
	// Arrange
	ray testRay = ray();
	MockRay testRayMock;
	EXPECT_CALL(testRayMock, addValue(12, 12)).Times(1).WillOnce(Return(24));
	// Act
	int result = testRayMock.addValue(12,12);

	// Assert
	EXPECT_EQ(result, 24);
}

