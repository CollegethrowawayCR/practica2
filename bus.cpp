#include "bus.h"
#include <sstream>
Bus::Bus(int VM, int vel, int trf, int plz) : Colectivo(VM, vel, trf, plz){
	
}
string Bus::toString() {
	std::stringstream s;
	s << "Vehiculo: Taxi.\n";
	s << "Velocidad: " << velocidad << " km/h.\n";
	s << "Velocidad maxima: " << velMax << " km/h.\n";
	return s.str();
}
