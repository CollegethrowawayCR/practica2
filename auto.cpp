#include "auto.h"
#include <sstream>
Auto::Auto() {
	velMax = 0;
	velocidad = 0;
}
Auto::Auto(int VM, int vel) {
	velMax = VM;
	velocidad = vel;
}
string Auto::frenar(int vel) {
	if (velocidad - vel < 0)
		velocidad = 0;
	else
		velocidad -= vel;
	return "Velocidad: " + std::to_string(velocidad) + " km/h.";
}
string Auto::accelerar(int vel) {
	if (velocidad + vel > velMax)
		velocidad = velMax;
	else
		velocidad += vel;
	return "Velocidad: " + std::to_string(velocidad) + " km/h.";
}
string Auto::toString() {
	std::stringstream s;
	s << "Velocidad: " << velocidad << " km/h.\n";
	s << "Velocidad maxima: " << velMax << " km/h.\n";
	return s.str();
}
void Auto::setVelocidad(int vel) {
	velocidad = vel;
}
int Auto::getVelocidad() {
	return velocidad;
}
