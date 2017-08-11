#include <stdlib.h>
#include <iostream>
#include <string>
#include "Bicicleta.h"
#include "Llanta.h"

Bicicleta::Bicicleta(Llanta* llanta, float precio, float peso): llanta(llanta), Precio(precio), Peso(peso){

}
Bicicleta::~Bicicleta(){
delete llanta;
}
	float Bicicleta::getPrecio(){
return this->Precio;

}
float Bicicleta::getPeso(){
return this->Peso;

}
Llanta* Bicicleta::getLlanta(){
return this->llanta;

}
void Bicicleta::setLlanta(Llanta* llanta){
this->llanta = llanta;
}
void Bicicleta::setPrecio(float precio){
this->Precio = precio;
}
void Bicicleta::setPeso(float peso){
this->Peso = peso;
}

