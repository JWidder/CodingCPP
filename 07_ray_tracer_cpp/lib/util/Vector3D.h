#pragma once

#include "Point3D.h"
#include "Dir3D.h"


class Vector3D {
	Point3D basis;
	Dir3D direction;

	Vector3D(Point3D& inBasis, Dir3D& inDirection) {
		this->basis = inBasis;
		this->direction = inDirection;
	}

	Vector3D(Point3D startPunkt, Point3D endPoint)
	{
		this->basis = startPunkt;
		this->direction = Util.difference(endPoint, startPunkt);
	}

	Point3D getPoint(double parameter)
	{
		Point3D *result = new Point3D();

		result->setxPos(basis.getxPos() + parameter * direction.getxDir());
		result->setyPos(basis.getyPos() + parameter * direction.getyDir());

		return result;
	}

	public Point3D getBasis() {
		return basis;
	}

	public Dir3D getDirection() {
		return direction;
	}
}
