#include "colectivo.h"
Colectivo::Colectivo(int VM, int vel, int trf, int plz) {
	velMax = VM;
	velocidad = vel;
	tarifas = trf;
	plazas = plz;
}
string Colectivo::toString() {
	std::stringstream s;
	s << "Velocidad: " << velocidad << " km/h.\n";
	s << "Velocidad maxima: " << velMax << " km/h.\n";
	return s.str();
}
