#include "Generator.h"

Intersection::Intersection(LightRay* inRay)
{
	this->inRay = inRay;
	outRay = nullptr;
	parameter = 0.0;
	typeInersection = TypeIntersection::MISSES;
	statusIntersection = StatusIntersection::MISS;
	return;
}

void Intersection::setParameter(double inParameter) 
{ 
	this->parameter = inParameter; 
};

double Intersection::Intersection::getParameter()
{ 
	return this->parameter; 
}

void Intersection::setInRay(LightRay * _inRay)
{
	this->inRay = _inRay;
}

void Intersection::setClassification(TypeIntersection inTypeIntersection, StatusIntersection inStatusIntersection)
{
	this->typeInersection = inTypeIntersection;
	this->statusIntersection = inStatusIntersection;
}

StatusIntersection Intersection::getStatusIntersection() { return this->statusIntersection; }
TypeIntersection Intersection::getTypeIntersection() { return this->typeInersection; }

