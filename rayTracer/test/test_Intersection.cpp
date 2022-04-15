#include "gmock/gmock.h"  // Brings in gMock
#include "gtest/gtest.h"

#include "Generator.h"

using namespace testing;

TEST(Test_Intersection, Test_IntersectRay_Misses) {
	Point3D testBasis = Point3D();
	Dir3D testDirection = Dir3D();
	LightRay *testLightRay = new LightRay(&testBasis,&testDirection);
	Intersection *testIntersection = new Intersection(testLightRay);
	EXPECT_EQ(0.0,testIntersection->getParameter());
	EXPECT_EQ(StatusIntersection::MISS, testIntersection->getStatusIntersection());
	EXPECT_EQ(TypeIntersection::MISSES, testIntersection->getTypeIntersection());
}

TEST(Test_Intersection, Test_IntersectRay_Touches) {
	Point3D testBasis = Point3D();
	Dir3D testDirection = Dir3D();
	LightRay* testLightRay = new LightRay(&testBasis, &testDirection);
	Intersection* testIntersection = new Intersection(testLightRay);
	EXPECT_EQ(0.0, testIntersection->getParameter());
	EXPECT_EQ(StatusIntersection::MISS, testIntersection->getStatusIntersection());
	EXPECT_EQ(TypeIntersection::MISSES, testIntersection->getTypeIntersection());
}
