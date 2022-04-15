#include "gtest/gtest.h"

#include "lightRay.h"

#include "util.h"

TEST(test_LightRay, TestContructorPointer) {
	Point3D *startPoint = new Point3D(10.0, 11.0, 12.0);
	Dir3D *testDir = new Dir3D(1.0, 2.0, 3.0);

	LightRay *test_LightRay = new LightRay(startPoint, testDir);

	EXPECT_EQ(1.0, test_LightRay->getDirection()->getxDir());
	EXPECT_EQ(2.0, test_LightRay->getDirection()->getyDir());
	EXPECT_EQ(3.0, test_LightRay->getDirection()->getzDir());

	EXPECT_EQ(10.0, test_LightRay->getStartPoint()->getxPos());
	EXPECT_EQ(11.0, test_LightRay->getStartPoint()->getyPos());
	EXPECT_EQ(12.0, test_LightRay->getStartPoint()->getzPos());
}

TEST(test_LightRay, TestContructorStandard) {
	Point3D startPoint = Point3D(10.0,11.0,12.0);
	Dir3D testDir = Dir3D(1.0, 2.0, 3.0);

	LightRay* test_LightRay = new LightRay(startPoint, testDir);

	EXPECT_EQ(1.0, test_LightRay->getDirection()->getxDir());
	EXPECT_EQ(2.0, test_LightRay->getDirection()->getyDir());
	EXPECT_EQ(3.0, test_LightRay->getDirection()->getzDir());

	EXPECT_EQ(10.0, test_LightRay->getStartPoint()->getxPos());
	EXPECT_EQ(11.0, test_LightRay->getStartPoint()->getyPos());
	EXPECT_EQ(12.0, test_LightRay->getStartPoint()->getzPos());
}

