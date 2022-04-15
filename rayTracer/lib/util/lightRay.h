#pragma once

#include "Point3D.h"
#include "Dir3D.h"
#include "Color.h"

class LightRay {
private:
	Point3D *_basis;
	Dir3D *_direction;

public:
	LightRay();
	LightRay(Point3D* basis, Dir3D* direction)
		: _basis(basis),
		_direction(direction)
	{
		;
	}

	LightRay(Point3D& basis, Dir3D& direction);
	Point3D *getStartPoint();
	Dir3D *getDirection();
};