#include "gmock/gmock.h"  // Brings in gMock
#include "gtest/gtest.h"

#include "mock_objects.h"

#include "Scene.h"
#include "lightRay.h"

namespace testing {

TEST(test_Sphere3D, TEST_MOCK) {

	using ::testing::NiceMock;

	NiceMock<MockSphere3D> testMock;
	// MockSphere3D testMock;

	LightRay testRay=LightRay(new Point3D(0.0,0.0,0.0),new Dir3D(1.0,0.0,0.));

	ON_CALL(testMock, doesIntersectRay).WillByDefault(Return(true));

	bool test = testMock.doesIntersectRay(testRay);

	EXPECT_EQ(true, test);
}

TEST(test_Sphere3D, IntersectRay_1a_LightRayMissesSphere) {
	double radius=1.0;
	
	Point3D mittelPunkt = Point3D(-2.0*radius, 2.0 * radius, 0.0);
	double valueReflection = 1.0;
	enum ColorValue valueColor = ColorValue::RED;
	Sphere3D testSphere3D = Sphere3D(mittelPunkt, valueReflection, radius,valueColor);

	Point3D basis = Point3D(0.0, 0.0, 0.0);
	Dir3D direction = Dir3D(1.0, 0.0, 0.0);
	Color color = Color();
	LightRay _lightRay = LightRay(&basis, &direction);

	Intersection *result = testSphere3D.intersectRay(_lightRay);
	
	EXPECT_EQ(DBL_MAX, result->getParameter());
	EXPECT_EQ(TypeIntersection::MISSES, result->getTypeIntersection());
	EXPECT_EQ(StatusIntersection::MISS, result->getStatusIntersection());

	EXPECT_EQ(false, testSphere3D.doesIntersectRay(_lightRay));
}

TEST(test_Sphere3D, IntersectRay_2a_LightRayTouchesSphere) {
	double radius = 1.0;

	Point3D mittelPunkt = Point3D(radius, radius, 0.0);
	double valueReflection = 1.0;
	enum ColorValue valueColor = ColorValue::RED;
	Sphere3D testSphere3D = Sphere3D(mittelPunkt, valueReflection, radius, valueColor);

	Point3D basis = Point3D(0.0, 0.0, 0.0);
	Dir3D direction = Dir3D(1.0, 0.0, 0.0);
	Color color = Color();
	LightRay _lightRay = LightRay(&basis, &direction);

	Intersection* result = testSphere3D.intersectRay(_lightRay);

	EXPECT_EQ(1.0, result->getParameter());
	EXPECT_EQ(TypeIntersection::TOUCH, result->getTypeIntersection());
	EXPECT_EQ(StatusIntersection::INTERSECT, result->getStatusIntersection());

	EXPECT_EQ(false, testSphere3D.doesIntersectRay(_lightRay));
}

TEST(test_Sphere3D, IntersectRay_2b_LightRayTouchesBehindSphere) {
	double radius = 1.0;

	Point3D mittelPunkt = Point3D(-radius, radius, 0.0);
	double valueReflection = 1.0;
	enum ColorValue valueColor = ColorValue::RED;
	Sphere3D testSphere3D = Sphere3D(mittelPunkt, valueReflection, radius, valueColor);

	Point3D basis = Point3D(0.0, 0.0, 0.0);
	Dir3D direction = Dir3D(1.0, 0.0, 0.0);
	Color color = Color();
	LightRay _lightRay = LightRay(&basis, &direction);

	Intersection* result = testSphere3D.intersectRay(_lightRay);

	EXPECT_EQ(-1.0, result->getParameter());
	EXPECT_EQ(TypeIntersection::TOUCH, result->getTypeIntersection());
	EXPECT_EQ(StatusIntersection::MISS, result->getStatusIntersection());

	EXPECT_EQ(false, testSphere3D.doesIntersectRay(_lightRay));
}

TEST(test_Sphere3D, IntersectRay_2c_LightRayStartsTouchingOnSphere) {
	double radius = 1.0;

	Point3D mittelPunkt = Point3D(0.0, radius, 0.0);
	double valueReflection = 1.0;
	enum ColorValue valueColor = ColorValue::RED;
	Sphere3D testSphere3D = Sphere3D(mittelPunkt, valueReflection, radius, valueColor);

	Point3D basis = Point3D(0.0, 0.0, 0.0);
	Dir3D direction = Dir3D(1.0, 0.0, 0.0);
	Color color = Color();
	LightRay _lightRay = LightRay(&basis, &direction);

	Intersection* result = testSphere3D.intersectRay(_lightRay);

	EXPECT_EQ(0.0, result->getParameter());
	EXPECT_EQ(TypeIntersection::TOUCH, result->getTypeIntersection());
	EXPECT_EQ(StatusIntersection::MISS, result->getStatusIntersection());

	EXPECT_EQ(false, testSphere3D.doesIntersectRay(_lightRay));
}

TEST(test_Sphere3D, IntersectRay_3a_LightRayStandardIntersection) {
	// MISSING Test test_Sphere3D_IntersectRay_3a_LightRayStandardIntersection ausprogrammieren
	EXPECT_EQ(1.0, 1.0);
}

TEST(test_Sphere3D, IntersectRay_3b_LightRayBehindIntersection) {
	// MISSING Test test_Sphere3D_IntersectRay_3b_LightRayBehindIntersection ausprogrammieren
	EXPECT_EQ(1.0, 1.0);
}

TEST(test_Sphere3D, IntersectRay_3c_LightRayInnerIntersection) {
	// MISSING Test test_Sphere3D_IntersectRay_3c_LightRayInnerIntersection ausprogrammieren
	EXPECT_EQ(1.0, 1.0);
}

TEST(test_Sphere3D, IntersectRay_3d_LightRayStartOnSphere) {
	// MISSING Test test_Sphere3D_IntersectRay_3d_LightRayStartOnSphere ausprogrammieren
	EXPECT_EQ(1.0, 1.0);
}

TEST(test_Sphere3D, GetterSetter) {
	// MISSING Test test_Sphere3D_GetterSetter ausprogrammieren
	EXPECT_EQ(1.0, 1.0);
}
}
