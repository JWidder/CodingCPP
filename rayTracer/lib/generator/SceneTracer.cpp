#include "Generator.h"

SceneTracer::SceneTracer(const Scene& inScene)
{
	this->dataScene = &inScene;
	return;
}

Color SceneTracer::traceLightRay(LightRay inLightRay, int count)
{
	return Color();
}
