#pragma once

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

	double getxDir() { return xDir; }
	double getyDir() { return yDir; }
	double getzDir() { return zDir; }
	void setxDir(double xDir) { xDir = xDir; }
	void setyDir(double yDir) { yDir = yDir; }
	void setzDir(double zDir) { zDir = zDir; }
};