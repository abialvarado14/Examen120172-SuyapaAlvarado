#include "Escultura.h"

Escultura::Escultura( double peso,  string material, int ID, string Nombre, int Fecha, string Autor) : Obras(ID, Nombre, Fecha, Autor) {
	this-> peso=peso;
	this-> material=material;
	this-> ID=ID;
   this-> Nombre=Nombre;
   this-> Fecha=Fecha;
   this-> Autor=Autor;

}


double Escultura::getpeso(){

return peso;
}


string Escultura::getmaterial(){

return material;
}


