#pragma once

#include<string>
using namespace std;
class Obras{

	protected:
		int ID;
		string Nombre;
		int Fecha;
		string Autor;

	public:
		Obras(int, string, int, string);
		int getID();
		string getNombre();
		int getFecha();
		string getAutor();



};

