#include "Literatura.h"

Literatura::Literatura( string Genero,  string Epoca, int ID, string Nombre, string Fecha, string Autor) : Obras(ID, Nombre, Fecha, Autor) {
	this-> Genero=Genero;
	this-> Epoca=Epoca;
	this-> ID=ID;
   this-> Nombre=Nombre;
   this-> Fecha=Fecha;
   this-> Autor=Autor;

}


string Literatura::getGenero(){

	return Genero;
}


string Literatura::getEpoca(){
	return Epoca;
}


