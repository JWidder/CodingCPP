#include "Sphere3D.h"

Sphere3D::Sphere3D(){
	return;
}

/**
 * @param mittelPunkt
 * @param radius
 */
Sphere3D::Sphere3D(Point3D mittelPunkt, double radius, ColorValue valueColors) {
	this.mittelPunkt = mittelPunkt;
	this.radius = radius;
	this.valueReflection = 0.9;
	this.valueColor = new Color(valueColors);
}
