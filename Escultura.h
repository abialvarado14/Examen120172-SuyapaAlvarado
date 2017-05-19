#pragma once
#include "Obras.h"

#include<string>
using namespace std;

class Escultura : public Obras{

	protected:
		double peso;
		string material;

	public:
		Escultura(double, string, string, string, string, string);
		double getpeso();
		string getmaterial();


};

