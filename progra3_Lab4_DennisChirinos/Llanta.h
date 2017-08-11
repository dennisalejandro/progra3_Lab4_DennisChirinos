#pragma once
#include <string>

using std::string;

class Llanta {
	public:
		Llanta(string, string, float);
		~Llanta();
		string getMaterial();
		string getColor();
		float getPrecio();
		void setMaterial(string);
		void setColor(string);
		void setPrecio(float);
	private:
		string Material;
		string Color;
		float Precio;

};

