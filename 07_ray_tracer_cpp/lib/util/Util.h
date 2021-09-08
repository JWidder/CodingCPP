#pragma once

#include <math.h>

#include "Dir3D.h"
#include "Point3D.h"

class util {
	static double getLength(Dir3D& inVector);
	static Dir3D difference(Dir3D& inV1, Dir3D& inV2);
	static Dir3D difference(Point3D& inV1, Point3D& inV2);
	double dot(Dir3D& a, Dir3D& b);
};