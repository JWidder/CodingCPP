#pragma once

#include <string>

#include "Color.h"

class OutputPicture {
public:
	OutputPicture(std::string fileName, int xLen, int yLen);
	void writePoint(Color inColor);
	void close();
};