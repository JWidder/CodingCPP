#pragma once

#include "Util.h"

class Vector3D {
	Point3D basis;
	Dir3D direction;

	Vector3D(Point3D& inBasis, Dir3D& inDirection) {
		this->basis = inBasis;
		this->direction = inDirection;
	};

	Vector3D(Point3D startPunkt, Point3D endPoint)
	{
		this->basis = startPunkt;
	};
};
