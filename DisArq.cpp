#include "DisArq.h"

DisArq::DisArq( string tipo_terreno, int ID, string Nombre, int Fecha, string Autor) : Obras(ID, Nombre, Fecha, Autor) {
	this-> tipo_terreno=tipo_terreno;
	this-> ID=ID;
   this-> Nombre=Nombre;
   this-> Fecha=Fecha;
   this-> Autor=Autor;

}


string DisArq::gettipo_terreno(){

	return tipo_terreno;
}

