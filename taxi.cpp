#include "taxi.h"
#include <sstream>
Taxi::Taxi(int VM, int vel, int trf, int plz) : Colectivo(VM, vel, trf, plz) {
	
}
string Taxi::toString() {
	std::stringstream s;
	s << "Vehiculo: Taxi.\n";
	s << Colectivo.tostring();//no se permite un nombre de tipo
	return s.str();
}
