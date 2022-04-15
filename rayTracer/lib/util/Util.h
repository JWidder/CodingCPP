#pragma once

#include <math.h>

// #include "Dir3D.h"

class Dir3D
{
private:
	double xDir;
	double yDir;
	double zDir;

public:
	Dir3D()
	{
		xDir = 1.0;
		yDir = 0.0;
		zDir = 0.0;
	};

	Dir3D(double inXDir, double inYDir, double inZDir)
	{
		xDir = inXDir;
		yDir = inYDir;
		zDir = inZDir;
	};

	Dir3D *scale(double value)
	{
		this->xDir *= value;
		this->yDir *= value;
		this->zDir *= value;
		return this;
	}

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

	Point3D()
	{
		this->xPos = 0.0;
		this->xPos = 0.0;
		this->zPos = 0.0;
	}

	Point3D(float xPos, float yPos, float zPos)
	{
		this->xPos = xPos;
		this->yPos = yPos;
		this->zPos = zPos;
	}

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