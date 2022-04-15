#include "Util.h"

Dir3D::Dir3D()
{
	xDir = 1.0;
	yDir = 0.0;
	zDir = 0.0;
};

Dir3D::Dir3D(double inXDir, double inYDir, double inZDir)
{
	xDir = inXDir;
	yDir = inYDir;
	zDir = inZDir;
};

Dir3D *Dir3D::scale(double value)
{
	this->xDir *= value;
	this->yDir *= value;
	this->zDir *= value;
	return this;
}
