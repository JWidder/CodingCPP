// #include "lightRay.h"

#include "Generator.h"


LightRay::LightRay()
{
	this->_basis=new Point3D();
	this->_direction = new Dir3D();
}

LightRay::LightRay(Point3D& basis, Dir3D& direction)
{
	this->_basis = &basis;
	this->_direction = &direction;
}

Point3D* LightRay::getStartPoint()
{
	return this->_basis;
}

Dir3D* LightRay::getDirection()
{
	return this->_direction;
}
