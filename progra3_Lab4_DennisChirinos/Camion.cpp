#include <stdlib.h>
#include <iostream>
#include <string>
#include "Bicicleta.h"
#include "Llanta.h"
#include "Camion.h"
using namespace std;
Camion::Camion(int n){
	setSize(n);
}
void Camion::setSize(int n) {
	int width = 0;
	int length = 0;
	width = n;
	if ((n % 4)==0) {
	length = n + (0.75*n);
	} else if ((n % 2)==0) {
	length = (1.5*n);
	} else {
	length = (2*n);
	}
	this->Length = length;
	this->Width = width;
	this->Size = (length*width);
}
void Camion::Add(int Numero, Bicicleta* b) {
	if ((this->Size)>Numero) {
	int PrecioTotal; 
	PrecioTotal = (b->getPrecio())*Numero;
	this->Valor = PrecioTotal;
	this->Size -= Numero;
	} else {
	cout << "No cabe!" << "\n";
	}
}
int Camion::getSize() {
	return this->Size;
}
float Camion::getValor() {
	return this->Valor;
}

