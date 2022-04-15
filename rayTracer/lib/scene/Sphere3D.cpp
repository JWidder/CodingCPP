#include "Util.h"

#include "Scene.h"


/**
 * Calculate intersection
 *
 * A Starting point of ray
 * B Direction of ray
 * C Center of sphere
 * r Radius of sphere
 *
 * P Intersection point to be calculated
 *
 * Sphere: dot((P-C)*(P-C))=r^2
 * Ray:    P=A+t*B
 *
 * Durch Einsetzen ergibt sich:
 *   dot((A + t*B - C)*(A + t*B - C)) = r^2
 * Ausmultiplizieren ergibt:
 *   t^2 * dot(B,B) + 2*t*dot(B,A-C) + dot((A-C),(A-C)) - r^2 = 0
 *
 *   a = dot(B,B)
 *   b = 2 * t * dot(B,A-C)
 *   c = dot((A-C),(A-C))
 *
 * Aufloesen mit der klassischen ab-Formel ergibt
 *   t1 = (-b + sqrt(b^2 - 4* a *c))/2*a
 *   t2 = (-b - sqrt(b^2 - 4* a *c))/2*a
 * Damit ergeben sich 0,1,2 Schnittpunkte
 *
 * Selection of the real intersection point. b
 *
 * @param ray
 * @return NULL in case no intersection or Intersection object if there is an intersection.
 */
Intersection *Sphere3D::intersectRay(LightRay &inRay)
{
	// A ray.getBasis()
	// B ray.getDirection()
	// C this.mittelPunkt
	// r this.radius

	double temp_a = dot(inRay.getDirection(), inRay.getDirection());
	Dir3D  temp_dir = difference(inRay.getStartPoint(), &_mittelPunkt);
	double temp_b = 2.0 * dot(inRay.getDirection(), &temp_dir);
	double temp_c = dot (&temp_dir, &temp_dir) - _radius * _radius;

	Intersection* result = new Intersection(&inRay);
	double discriminante = (temp_b * temp_b) - (4 * temp_a * temp_c);
	if (discriminante < 0.0)
	{
		result->setParameter(DBL_MAX);
		result->setClassification(TypeIntersection::MISSES, StatusIntersection::MISS);
	}
	else
	{
		double t;
		if (discriminante == 0.0)
		{
			t = -temp_b / (2 * temp_a);
			result->setParameter(t);
			if (t > 0) {
				// MISSING Normalenverktor berechnen 
				result->setClassification(TypeIntersection::TOUCH, StatusIntersection::INTERSECT);

			}
			else
			{
				if (t < 0) {
					// MISSING Normalenverktor berechnen 
					result->setClassification(TypeIntersection::TOUCH, StatusIntersection::MISS);
				}
				else {
					// MISSING Normalenverktor berechnen 
					result->setClassification(TypeIntersection::TOUCH, StatusIntersection::MISS);
				}
			}
		}
		else
		{
			double t1 = (-temp_b - sqrt(discriminante)) / (2 * temp_a);
			double t2 = (-temp_b + sqrt(discriminante)) / (2 * temp_a);
			if (t2 >= 1.0)	// Intersection outside Screen
			{
				result->setParameter(t1);
			}
			else if ((t1 < 1.0) && (t2 >= 1.0)) // Object interferes with the screen.
			{
				result->setParameter(t1);
			}
			else // No intersection in the allowed area.
			{
				result->setParameter(DBL_MAX);
			}
		}
	}
	return result;
}
