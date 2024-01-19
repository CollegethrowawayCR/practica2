#pragma once
#include "colectivo.h"
class Bus :public Colectivo {
	Bus(int, int, int, int);
	string toString();
};
