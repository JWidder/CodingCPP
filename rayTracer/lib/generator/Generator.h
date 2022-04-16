#pragma once

#include <iostream>
#include <string>
#include <format>

#include "Util.h"

class LightRay {
private:
	Point3D* _basis;
	Dir3D* _direction;

public:
	LightRay();
	LightRay(Point3D* basis, Dir3D* direction)
		: _basis(basis),
		_direction(direction)
	{
		;
	}

	LightRay(Point3D& basis, Dir3D& direction);
	Point3D* getStartPoint();
	Dir3D* getDirection();
	Point3D* getIntersectionPoint();
};

class Intersection {

private:

	Point3D intersectionPoint;
	Dir3D normalVector;

	double parameter;

	LightRay *inRay;
	LightRay *outRay;

	TypeIntersection typeInersection;
	StatusIntersection statusIntersection;

public:
	Intersection(LightRay* inRay);
    Intersection() = default; // C++11 default constructor creation

	void setParameter(double inParameter);
	double getParameter();

	void setInRay(LightRay* _inRay);
	void setClassification(TypeIntersection inTypeIntersection, StatusIntersection inStatusIntersection);

	StatusIntersection getStatusIntersection();
	TypeIntersection getTypeIntersection();
};

class Scene;

/**
* Die klasse steuert das generieren eines Bildes. 
*/
class PictureGenerator
{
	int _xLen;
	int _yLen;
	int count = 0;

	long deltaCamera = 2;

	double screenLen = 5.0;

	double screenBase_x=0.0;
	double screenBase_y=0.0;

	double deltaScreen = 0.0;

	Point3D positionCamera;


public:
	PictureGenerator(int xLen, int yLen, Scene *inScene);

	void createPicture(int bildNummer);

	/**
 * Find the position of the point with the coordinates (xCount,yCount) on the
 * screen. The Screen is fixed in the plane x=0.
 *
 * TODO Make screen movable
 *
 * @param xCount x-coordinate of the point on the screen
 * @param yCount y-coordinate of the point on the screen
 * @return Position of the point where the beam intersects the screen.
 */
	Point3D* getScreenPoint(int xCount, int yCount);

};

class OutputPicture {
public:
	OutputPicture(std::string fileName, int xLen, int yLen);
	void writePoint(Color inColor);
	void close();
};

class SceneTracer {
	const Scene *dataScene;
public:
	SceneTracer(const Scene &inScene);
	Color traceLightRay(LightRay inLightRay, int count);
	LightRay getNextRay(LightRay lightRay, Intersection nextIntersection);
	Intersection intersectRay(LightRay ray);
};