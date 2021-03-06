#include "util.h"

double getLength(int inVector)
{
	return 0.0;
}

double getLength(Dir3D &inVector)
{
	double result;

	result = inVector.getxDir() * inVector.getxDir();
	result += inVector.getyDir() * inVector.getyDir();
	result += inVector.getzDir() * inVector.getzDir();

	result = sqrt(result);

	return result;
}

Dir3D difference(Dir3D& inV1, Dir3D& inV2)
{
	Dir3D result = Dir3D();
	result.setxDir(inV1.getxDir() - inV2.getxDir());
	result.setyDir(inV1.getyDir() - inV2.getyDir());
	result.setzDir(inV1.getzDir() - inV2.getzDir());
	return result;
}

Dir3D difference(Point3D& inV1, Point3D& inV2)
{
	Dir3D result = Dir3D();

	double test1 = inV1.getxPos();
	double test2 = inV2.getxPos();
	double test3 = test1 - test2;

	result.setxDir(inV1.getxPos() - inV2.getxPos());
	result.setyDir(inV1.getyPos() - inV2.getyPos());
	result.setzDir(inV1.getzPos() - inV2.getzPos());
	return result;
}

Dir3D difference(Point3D *inV1, Point3D *inV2)
{
	Dir3D result = Dir3D();

	double test1 = inV1->getxPos();
	double test2 = inV2->getxPos();
	double test3 = test1 - test2;

	result.setxDir(inV1->getxPos() - inV2->getxPos());
	result.setyDir(inV1->getyPos() - inV2->getyPos());
	result.setzDir(inV1->getzPos() - inV2->getzPos());
	return result;
}


double dot(Dir3D *a, Dir3D *b)
{
	double wert = 0.0;
	wert += a->getxDir() * b->getxDir();
	wert += a->getyDir() * b->getyDir();
	wert += a->getzDir() * b->getzDir();
	return wert;
}

/**
The funcion returns the reflected ray. 
*/
Dir3D reflect(Dir3D normal, Dir3D inRay)
{
	double f = dot(&inRay, &normal);
	// Dir3D rn = inRay - normal.scale(2.0);
	Dir3D rn = Dir3D();

	return rn;
}
