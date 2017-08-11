#pragma once
#include <string>
#include "Llanta.h"
#include "Bicicleta.h"

class Camion {
	public:
		Camion(int);
		void setSize(int);
		void Add(int, Bicicleta*);
		int getSize();
		float getValor();
	private:
		int Width;
		int Length;
		int Size;
		float Valor;
};

