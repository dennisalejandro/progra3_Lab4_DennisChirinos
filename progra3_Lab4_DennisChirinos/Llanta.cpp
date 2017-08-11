#include <stdlib.h>
#include <iostream>
#include <string>
#include "Llanta.h"

using namespace std;
Llanta::Llanta(string material, string color, float precio): Material(material), Color(color), Precio(precio){

}

Llanta::~Llanta() {
	
}
string Llanta::getMaterial() {
	return this->Material;
}
string Llanta::getColor() {
	return this->Color;
}
float Llanta::getPrecio() {
	return this->Precio;
}
void Llanta::setMaterial(string material){
	this->Material = material;	
}
void Llanta::setColor(string color){
	this->Color = color;
}
void Llanta::setPrecio(float precio){
	this->Precio = precio;
}
