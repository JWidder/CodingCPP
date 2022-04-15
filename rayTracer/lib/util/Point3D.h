#pragma once
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

