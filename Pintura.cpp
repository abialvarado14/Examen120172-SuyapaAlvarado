#include "Pintura.h"

Pintura::Pintura( string Lienzo,  string Tecnica, string ID, string Nombre, string Fecha, string Autor) : Obras(ID, Nombre, Fecha, Autor) {
	this-> Lienzo=Lienzo;
	this-> Tecnica=Tecnica;
	this-> ID=ID;
   this-> Nombre=Nombre;
   this-> Fecha=Fecha;
   this-> Autor=Autor;

}


string Pintura::getLienzo(){

	return Lienzo;
}


string Pintura::getTecnica(){

	return Tecnica;
}


