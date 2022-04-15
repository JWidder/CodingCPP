#include <iostream>
#include <format>

#include "Scene.h"
#include "LightRay.h"

#include "PictureGenerator.h"

PictureGenerator::PictureGenerator(int xLen, int yLen, Scene inScene)
{
	this->_xLen = xLen;
	this->_yLen = yLen;
	return;
}

void PictureGenerator::createPicture(int bildNummer)
{
	OutputPicture bildAusgabe = OutputPicture(std::format("test_{}.ppm", bildNummer), _xLen,_yLen);
	for (int yCount = 0; yCount < this->_yLen; yCount++) {
		for (int xCount = 0; xCount < this->_xLen; xCount++) {
			Point3D *screenPoint = getScreenPoint(xCount, yCount);
			// LightRay *startRay = new LightRay(this->positionCamera,  screenPoint);
			// Color result = sceneTracer.traceLightRay(startRay, 0);
			// bildAusgabe.writePoint(result);
		}
	}
	bildAusgabe.close();
}


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
Point3D *PictureGenerator::getScreenPoint(int xCount, int yCount) {
	Point3D *result = new Point3D();

	result->setxPos(0.0);
	result->setyPos(this->screenBase_x + xCount * this->deltaScreen);
	result->setzPos(this->screenBase_y + yCount * this->deltaScreen);

	return result;
}
