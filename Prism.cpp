#include "Prism.h"

Prism::Prism(float length, float width, float height) {
	this-> length = length;
	this-> width = width;
	this-> height = height;
}

float Prism::calcPrismVol() {
	volume = length * width * height;

	return volume;
}
