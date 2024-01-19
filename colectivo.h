#pragma once
#include "auto.h"
class Colectivo :public Auto {
	protected:
		int plazas;
		int tarifas;
	public:
		Colectivo(int, int, int, int);
};
