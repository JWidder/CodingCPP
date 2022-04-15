#pragma once

#include <math.h>

enum TypeIntersection { TOUCH, INTERSECTION, BEHIND_INTERSECTION, BEHIND_TOUCH, INNER_INTERSECTION, MISSES, START_TOUCH, START_INTERSECT };
enum StatusIntersection { MISS, INTERSECT };

enum class ColorValue {
	GREY = (142, 142, 147),
	RED = (255, 59, 48),
	GREEN = (76, 217, 100),
	PURPLE = (88, 86, 214),
	LIGHTBLUE = (52, 170, 220),
	BLACK = (0, 0, 0)
};

#pragma once

#define VALUE_RED 0
#define VALUE_GREEN 1
#define VALUE_BLUE 2

class Color {
private:
	double value[3];
public:
	Color() {
		value[VALUE_RED] = 1.0;
		value[VALUE_GREEN] = 1.0;
		value[VALUE_BLUE] = 1.0;
	}
};

class Dir3D
{
private:
	double xDir;
	double yDir;
	double zDir;

public:
	Dir3D();

	Dir3D(double inXDir, double inYDir, double inZDir);

	Dir3D* scale(double value);

	double getxDir() { return this->xDir; }
	double getyDir() { return this->yDir; }
	double getzDir() { return this->zDir; }
	void setxDir(double inxDir) { this->xDir = inxDir; }
	void setyDir(double inyDir) { this->yDir = inyDir; }
	void setzDir(double inzDir) { this->zDir = inzDir; }
};

class Point3D
{
private:

	double xPos=0.0, yPos=0.0, zPos=0.0;

public:

	Point3D();
	Point3D(float xPos, float yPos, float zPos);

	double getxPos() { return this->xPos; }
	double getyPos() { return this->yPos; }
	double getzPos() { return this->zPos; }

	void setxPos(double xPos) {xPos = this->xPos;}
	void setyPos(double yPos) {yPos = this->yPos; }
	void setzPos(double zPos) {zPos = this->zPos;}
};


double getLength(Dir3D& inVector);
Dir3D difference(Dir3D& inV1, Dir3D& inV2);
Dir3D difference(Point3D& inV1, Point3D& inV2);
Dir3D difference(Point3D *inV1, Point3D *inV2);
double dot(Dir3D *a, Dir3D *b);
Dir3D reflect(Dir3D normal, Dir3D inRay);

class Vector3D {
	Point3D basis;
	Dir3D direction;

	public:
		Vector3D(Point3D& inBasis, Dir3D& inDirection);
		Vector3D(Point3D startPunkt, Point3D endPoint);
};
