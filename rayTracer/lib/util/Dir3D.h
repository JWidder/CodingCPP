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