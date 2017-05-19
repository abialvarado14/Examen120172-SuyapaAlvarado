#include "Obras.h"


Obras::Obras( string ID,  string Nombre,  string Fecha,  string Autor) {
	this-> ID=ID;
	this-> Nombre=Nombre;
	this-> Fecha=Fecha;
	this-> Autor=Autor;
}


string Obras::getID(){

	return ID;
}	



string Obras::getNombre(){

	return Nombre;
}


string Obras::getFecha(){

	return Fecha;
}


string Obras::getAutor(){

	return Autor;
}



