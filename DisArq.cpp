#include "DisArq.h"

DisArq::DisArq( string Tipo_terreno, string ID, string Nombre, string Fecha, string Autor) : Obras(ID, Nombre, Fecha, Autor) {
	this-> Tipo_terreno=Tipo_terreno;
	this-> ID=ID;
   this-> Nombre=Nombre;
   this-> Fecha=Fecha;
   this-> Autor=Autor;

}


string DisArq::getTipo_terreno(){

	return Tipo_terreno;
}

