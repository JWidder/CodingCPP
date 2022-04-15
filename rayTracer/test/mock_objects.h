#pragma once

#include "gmock/gmock.h"

#include "Sphere3D.h"
#include "SceneElement.h"

class MockSphere3D : public Sphere3D {
public:
	MOCK_METHOD (Intersection *, intersectRay, (LightRay& inRay), (override));
	MOCK_METHOD (bool, doesIntersectRay, (LightRay& inRay), (override));
	MOCK_METHOD (Dir3D*, getNormale, (), (override));
};

class MockSceneElement : public SceneElement {
public:
	MOCK_METHOD(Intersection*, intersectRay, (LightRay& inRay), (override));
	MOCK_METHOD(bool, doesIntersectRay, (LightRay& inRay), (override));
	MOCK_METHOD(Dir3D*, getNormale, (), (override));
};