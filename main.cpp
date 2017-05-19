#include<iostream>
#include<string>
#include<vector>
#include "Obras.h"
#include "Escultura.h"
#include "Pintura.h"
#include "Literatura.h"
#include "DisArq.h"

using namespace std;
int generarID();

int main(){

	int opc, opcObras, ID=2;
	double peso;
	string fecha, autor, epoca, genero, nombre_obra, material;
	vector<Obras*> obras;
	vector <Obras*> transferidos;
	cout << "----------Museo de Arte Británico----------" << endl;
	
	while (opc!=5){
	
		cout << "Ingrese la opción que desea:\n1.Agregar\n2.Eliminar\n3.Generar Reporte\n4.Transferir a otro Museo\n5.Generar reporte de Obras transferidas\n6.Buscar: ";
		cin >> opc;

	switch(opc){//MENU PRINCIPAL

		case 1://AGREGAR
			cout << "----------AGREGAR---------" << endl << endl;

			cout << "Ingrese el nombre del autor: ";
			cin >> autor;
			cout << "Ingrese la fecha de ingreso al museo: ";
			cin >> fecha;
			cout << "Ingrese el nombre de la obra: ";
			cin >> nombre_obra;
			cout << endl << "Que tipo de Obra quiere agregar?:\n1.Literatura\n2.Escultura\n3.Arquitectura\n4.Pintura: ";
			cin >> opcObras;
			
			if(opcObras==1){//LITERATURA
				cout << endl << "Ingrese genero literario: ";
				cin >> genero;
				cout << "Ingrese la epoca: ";
				cin >> epoca;
				Literatura* lit = new Literatura(genero, epoca, ID, nombre_obra, fecha, autor);
				obras.push_back(lit);
			//FIN LITERATURA

			}else if(opcObras==2){ //ESCULTURA
				cout << endl << "Ingrese el peso: ";
				cin >> peso;
				cout << "Ingrese material: ";
				cin >> material;
				Escultura* esc = new Escultura(peso, material, ID, nombre_obra, fecha, autor);
				obras.push_back(esc);
								
			//FIN ESCULTURA
				
			}else if (opcObras==3){//ARQUITECTURA
				
			//FIN ARQUITECTURA
			}

		break;//FIN AGREGAR


	}//FIN MENU PRINCIPAL
		


	}

return 0;
}

int generarID(){
	
}
