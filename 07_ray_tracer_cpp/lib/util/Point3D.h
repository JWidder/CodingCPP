#pragma once
class Point3D
{
private:

	float xPos=0.0, yPos=0.0, zPos=0.0;

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

	double getxPos() {return xPos;}
	double getyPos() { return yPos; }
	double getzPos() { return zPos; }

	void setxPos(double xPos) {xPos = xPos;}
	void setyPos(double yPos) {yPos = yPos; }
	void setzPos(double zPos) {zPos = zPos;}

};

