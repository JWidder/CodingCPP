#include "Generator.h"

SceneTracer::SceneTracer(const Scene& inScene)
{
	this->dataScene = &inScene;
}

/**
 * Realisiert die rekursive Strahlverfolgung.
 *
 * Abbruchkriterien sind
 *
 *  - der Strahl schneidet das Ende der Scene. Dann wird dies Farbe schwarz zurückgegeben.
 *  - Die Anzahl der Iterationen überschrieb Anzahl der Iterationen den maximalen Wert
 *    übersteigt, dann wird die ambient Farbe des letzten Objektes zurückgegeben.
 *
 * @param inLightRay
 * @param count
 * @return Farbe des reflektierten Lichtstrahls
 */
Color SceneTracer::traceLightRay(LightRay inLightRay, int count) {
	//Intersection testIntersection = intersectRay(inLightRay);
	//if (count >= 20) {
	//	// ToDo Hier die Farbe des letzten berührten Objektes der Scene eintragen
	//	return new Color(ColorValue.BLACK);
	//}
	//else if (testIntersection.getIntersectionPoint() == null) {
	//	return new Color(ColorValue.BLACK);
	//}
	//else {
	//	LightRay nextRay = getNextRay(inLightRay, testIntersection);
	//	testIntersection.addOutLightRay(nextRay);
	//	return traceLightRay(nextRay, count + 1);
	//}
	return Color();
}

LightRay SceneTracer::getNextRay(LightRay lightRay, Intersection nextIntersection)
{
	return LightRay();
}

/**
 * Ermittelt den Schnittpunkt mit dem Strahl. Die Parameter an dem Schnittpunkt
 * werden in einem Objekt der Klasse Intersection zurückgegeben. Einzelne sind
 * dies: - der Schnittpunkt - Normalenvektor an dem Schnittpunkt.
 *
 * und die Einheitsnormale an dem Schnittpunkt
 *
 * @param ray
 * @return {@link util.Intersection}
 */
Intersection SceneTracer::intersectRay(LightRay ray) {
	Intersection refIntersection = nullptr;
	double refParameter = DBL_MAX;

	//// Suche den zum Ursprung des Strahls nächsten Schnittpunkt.
	//for (ISceneElement sceneElement : this.scene.getElements()) {
	//	Intersection result = sceneElement.intersectRay(ray);
	//	if (result.getParameter() < refParameter) {
	//		refParameter = result.getParameter();
	//		refIntersection = result;
	//		refIntersection.addInLightRay(ray);
	//	}
	//}

	//if (refIntersection == null) {
	//	return new Intersection(Double.MAX_VALUE, null, null, ray);
	//}
	//else {
	//	return refIntersection;
	//}
	return Intersection();
}


/**
 *
 * @param lightRay
 * @param nextIntersection
 *
 * @return {@link scene.LightRay} reflected ray
 */
//LightRay SceneTracer::getNextRay(LightRay lightRay, Intersection nextIntersection) {
//	Dir3D rn = Util.calculateReflectedDir(nextIntersection, lightRay.getDirection());
//	LightRay newRay = new LightRay(nextIntersection.getIntersectionPoint(), rn);
//	return newRay;
//}


