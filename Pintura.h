#pragma once
#include"Obras.h"
#include<string>

using namespace std;

class Pintura : public Obras{

	protected:
		string Lienzo;
		string Tecnica;

	public:
		Pintura(string, string, int, string, int, string);
		string getLienzo();
		string getTecnica();


};