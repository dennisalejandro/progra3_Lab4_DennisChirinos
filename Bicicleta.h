#pragma once
#include <string>
#include "Llanta.h"
class Bicicleta {
	public:
		Bicicleta(Llanta*, float, float);
		~Bicicleta();
		float getPrecio();
		float getPeso();
		Llanta* getLlanta();
		void setLlanta(Llanta*);
		void setPrecio(float);
		void setPeso(float);
	private:
		float Precio;
		float Peso;
		Llanta* llanta;
};

