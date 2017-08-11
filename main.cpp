#include <iostream>
#include <string>
#include "Llanta.h"
#include "Bicicleta.h"
#include "Montana.h"
#include "Camion.h"
Llanta* CrearLlanta();
Bicicleta* CrearBicicleta(Llanta*);
using namespace std;

int main() {
	int Size1; 
	int Size2;

	cout << "Tamaño del camion 1?" << "\n";
	cin >> Size1;
	cout << "Tamaño del camion 2?" << "\n";
	cin >> Size2;
	Camion* camion1 = new Camion(Size1);
	Camion* camion2 = new Camion(Size2);
	bool exit = true;
	while (exit) {
	int op;
	cout << "1) Llenar Camion 1?" << "\n";
	cout << "2) Llenar Camion 2?" << "\n";
	cout << "3) Nueva bicicleta" << "\n";
	cout << "4) Salir" << "\n";
	cin >> op;
	if (op == 1) {
		Llanta* l1 = CrearLlanta();
		Bicicleta* b1 = CrearBicicleta(l1);
		int precioC1;
		precioC1 = camion1->getSize();
		camion1->Add(precioC1-1, b1);
		//delete l1;
		//delete b1;

	} else if (op == 2) {
		Llanta* l2 = CrearLlanta();
		Bicicleta* b2 = CrearBicicleta(l2);
		int precioC2;
		precioC2 = camion2->getSize();
		camion2->Add(precioC2-1, b2);
		//delete l2;
		//delete b2;

	}
	else if (op == 3) {
		Llanta* l = CrearLlanta();
		Bicicleta* b = CrearBicicleta(l);
		cout << "Montar cuantas de esta bicicleta?"<<"\n";
		int Num_B;
		int Num_C;
		cin >> Num_B;
		cout << "A cual camion?" << "\n";
		cin >> Num_C;
		if (Num_C == 1) {
			camion1->Add(Num_B, b);
		} else if (Num_C==2) {
			camion2->Add(Num_B, b);
		}
		//delete l;
		//delete b;
	} else if (op == 4) {	
		exit = false;
	}
	cout << "El Valor del camion 1 es de:"<<"\n";
	cout << camion1->getValor() <<"\n";
	cout << "El Valor del camion 2 es de:"<<"\n";
	cout << camion2->getValor() <<"\n";
	}
	return 0;
}

Llanta* CrearLlanta() {
	cout << "Ingrese Precio, Color, Material" << "\n";
	float precio;
	string color;
	string material;
	cin >> precio;
	cin >> color;
	cin >> material;
	Llanta* wheel = new Llanta(material, color, precio);
	return wheel;
}
Bicicleta* CrearBicicleta(Llanta* wheel) {
	cout << "Ingrese Precio, y Peso" << "\n";
	float precio;
	float peso;
	cin >> precio;
	cin >> peso;							
	Bicicleta* bici = new Bicicleta(wheel, precio, peso);
	return bici;
}
