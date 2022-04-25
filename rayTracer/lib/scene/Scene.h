#pragma once

#include <vector>
#include <string>

#include "math.h"

#include "Util.h"
#include "Generator.h"

class SceneElement
{
public:
	virtual ~SceneElement() { ; }
	virtual generator::Intersection* intersectRay(generator::LightRay& inRay) = 0;
	virtual bool doesIntersectRay(generator::LightRay& inRay) = 0;
	virtual Dir3D* getNormale() = 0;
};

class LightSource {
public:
	virtual ~LightSource() { return; }
	virtual Color* getColorLight() = 0;
	virtual Point3D* getLightPosition() = 0;
};

/**
Aufgabe:

Vewalten der Elemente, die die Szene beschreiben.
*/
class Scene {
private:
	std::vector<SceneElement *> sceneElements;
	std::vector<LightSource *> sceneLightSources;

public:

	Scene() {
		sceneElements = std::vector<SceneElement* >();
		sceneLightSources = std::vector<LightSource *>();
	}

	void addElement(SceneElement& inSceneElement) {
		sceneElements.push_back(&inSceneElement);
	}

	void addElement(LightSource &inSceneLightSource) {
		sceneLightSources.push_back(&inSceneLightSource);
	}

	std::vector<SceneElement *> *getSceneElements() {
		return &sceneElements;
	}
	std::vector<LightSource *>* getSceneLights() {
		return &sceneLightSources;
	}

};


class Plane3D : SceneElement
{
	Point3D basePoint;
	Dir3D normal;

	Plane3D(Point3D inBasePoint, Dir3D inNormal)
	{
		this->basePoint = inBasePoint;
		this->normal = inNormal;
	}
};

class Sphere3D : SceneElement {
private:
	double _radius;
	double _valueReflection;
	Point3D _mittelPunkt;
	ColorValue _valueColor;
	Dir3D _normal;

public:
	Sphere3D() :
		_radius(1.0),
		_valueColor(ColorValue::RED),
		_valueReflection(0.1) { ; }
	Sphere3D(Point3D mittelPunkt, double valueReflection, double radius, ColorValue valueColors)
		: _mittelPunkt(mittelPunkt),
		_valueReflection(valueReflection),
		_radius(radius),
		_valueColor(valueColors) {;}

	virtual ~Sphere3D() { ; }

	virtual generator::Intersection *intersectRay(generator::LightRay &inRay);

	virtual bool doesIntersectRay(generator::LightRay& inRay) {
		// MISSES Sphere 3D doesIntersectRay ausprogrammieren
		return false;
	}

	virtual Dir3D *getNormale() {return (&this->_normal);}
};


class spotlight : public LightSource {
private:
	Color colorlight;
	Point3D poslight;
public:
	spotlight(Color& incolorlight, Point3D& inposlight) {
		this->colorlight = incolorlight;
		this->poslight = inposlight;
	}
	virtual Color* getcolorlight() { return &this->colorlight; }
	virtual Point3D* getlightposition() { return &this->poslight; }
};
