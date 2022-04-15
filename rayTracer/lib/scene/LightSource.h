#pragma once

#include "Color.h"
#include "Point3D.h"

class LightSource {

public:
	virtual ~LightSource() { return; }
	virtual Color *getColorLight() = 0;
	virtual Point3D *getLightPosition() = 0;
};

