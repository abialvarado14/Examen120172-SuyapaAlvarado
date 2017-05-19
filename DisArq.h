#pragma once

#include<string>
#include"Obras.h"

using namespace std;

class DisArq : public Obras{

	protected:
		string Tipo_terreno;

	public:
		DisArq(string, int, string, string, string);
		string getTipo_terreno();
	


};

