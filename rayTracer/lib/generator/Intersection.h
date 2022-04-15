//#pragma once
//
//#include "Util.h"
//
//#include "Generator.h"
//#include "lightRay.h"

//enum class TypeIntersection { TOUCH, INTERSECTION, BEHIND_INTERSECTION, BEHIND_TOUCH, INNER_INTERSECTION, MISSES, START_TOUCH, START_INTERSECT };
//enum class StatusIntersection { MISS, INTERSECT };

//class Intersection {
//
//private:
//	// SceneElement refElement;
//
//	Point3D intersectionPoint;
//	Dir3D normalVector;
//
//	double parameter;
//
//	LightRay *inRay;
//	LightRay *outRay;
//
//	TypeIntersection typeInersection;
//	StatusIntersection statusIntersection;
//
//public:
//	Intersection(LightRay *inRay) 
//	{ 
//		this->inRay = inRay;
//		outRay = nullptr;
//		parameter = 0.0;
//		typeInersection = TypeIntersection::MISSES;
//		statusIntersection = StatusIntersection::MISS;
//		return; 
//	}
//	// Own constructor
//    Intersection() = default; // C++11 default constructor creation
//
//	void setParameter(double inParameter) {this->parameter = inParameter;};
//	double getParameter() { return this->parameter; }
//
//	void setInRay(LightRay *_inRay) {
//		this->inRay = _inRay;
//	}
//
//	void setClassification(TypeIntersection inTypeIntersection,StatusIntersection inStatusIntersection)
//	{
//		this->typeInersection = inTypeIntersection;
//		this->statusIntersection = inStatusIntersection;
//	}
//
//	StatusIntersection getStatusIntersection() { return this->statusIntersection; }
//	TypeIntersection getTypeIntersection() { return this->typeInersection; }
//};
