#pragma once
#include <iostream>
using std::string;
class Auto {
	protected:
		int velMax;
		int velocidad;
	public:
		Auto();
		Auto(int, int);
		string frenar(int);
		string accelerar(int);
		string toString();
		void setVelocidad(int);
		int getVelocidad();
};
