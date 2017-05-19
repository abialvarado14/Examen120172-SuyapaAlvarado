#include "Obras.h"


Obras::Obras( int ID,  string Nombre,  int Fecha,  string Autor) {
	this-> ID=ID;
	this-> Nombre=Nombre;
	this-> Fecha=Fecha;
	this-> Autor=Autor;
}


int Obras::getID(){

	return ID;
}	



string Obras::getNombre(){

	return Nombre;
}


int Obras::getFecha(){

	return Fecha;
}


string Obras::getAutor(){

	return Autor;
}



