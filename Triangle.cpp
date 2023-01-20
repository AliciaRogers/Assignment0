#include "Triangle.h"

Triangle::Triangle(float sideA, float sideB) {
	this-> sideA = sideA;
	this-> sideB = sideB;
}

float Triangle::calcHyp() {
	hypotenuse = sqrt((sideA * sideA) + (sideB * sideB));

	return hypotenuse;
}
