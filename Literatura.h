#pragma once

#include<string>
#include"Obras.h"
using namespace std;

class Literatura : public Obras{

	protected:
		string Genero;
		string Epoca;


	public:
		Literatura(string, string, int, string, int, string);
		string getGenero();
		string getEpoca();



};
