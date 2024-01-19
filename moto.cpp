#include "moto.h"
#include <sstream>
Moto::Moto(int VM, int vel) {
	velMax = VM;
	velocidad = vel;
}
string Moto::toString() {
	std::stringstream s;
	s << "Vehiculo: Moto.\n";
	s << "Velocidad: " << velocidad << " km/h.\n";
	s << "Velocidad maxima: " << velMax << " km/h.\n";
	return s.str();
}
