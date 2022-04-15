//#pragma once
//
//#include <iostream>
//#include <string>
//#include <format>
//
//#include "scene.h"
//#include "OutputPicture.h"
//
///**
//* Die klasse steuert das generieren eines Bildes. 
//*/
//class PictureGenerator
//{
//	int _xLen;
//	int _yLen;
//	int count = 0;
//
//	long deltaCamera = 2;
//
//	double screenLen = 5.0;
//
//	double screenBase_x=0.0;
//	double screenBase_y=0.0;
//
//	double deltaScreen = 0.0;
//
//	Point3D positionCamera;
//
//
//public:
//	PictureGenerator(int xLen, int yLen, Scene inScene);
//
//	void createPicture(int bildNummer);
//
//	/**
// * Find the position of the point with the coordinates (xCount,yCount) on the
// * screen. The Screen is fixed in the plane x=0.
// *
// * TODO Make screen movable
// *
// * @param xCount x-coordinate of the point on the screen
// * @param yCount y-coordinate of the point on the screen
// * @return Position of the point where the beam intersects the screen.
// */
//	Point3D* getScreenPoint(int xCount, int yCount);
//
//};