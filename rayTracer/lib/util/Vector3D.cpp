#include "Util.h"

Vector3D::Vector3D(Point3D& inBasis, Dir3D& inDirection) {
	this->basis = inBasis;
	this->direction = inDirection;
};

Vector3D::Vector3D(Point3D startPunkt, Point3D endPoint)
{
	this->basis = startPunkt;
};
