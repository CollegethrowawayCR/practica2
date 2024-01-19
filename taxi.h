#pragma once
#include "colectivo.h"
class Taxi :public Colectivo {
	public:
		Taxi(int, int, int, int);
		string toString();
};
