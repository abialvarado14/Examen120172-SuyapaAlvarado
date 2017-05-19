#pragma once

#include<string>
using namespace std;
class Obras{

	protected:
		int ID;
		string Nombre;
		string Fecha;
		string Autor;

	public:
		Obras(int, string, string, string);
		int getID();
		string getNombre();
		string getFecha();
		string getAutor();



};

