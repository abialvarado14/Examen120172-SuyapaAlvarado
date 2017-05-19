#pragma once

#include<string>
using namespace std;
class Obras{

	protected:
		string ID;
		string Nombre;
		string Fecha;
		string Autor;

	public:
		Obras(string, string, string, string);
		string getID();
		string getNombre();
		string getFecha();
		string getAutor();



};

