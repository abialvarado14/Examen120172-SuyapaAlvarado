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
	string fecha, autor, epoca, genero, nombre_obra, material, tipo, lienzo, tec;
	vector<Obras*> obras;
	vector <Obras*> transferidos;
	cout << "----------Museo de Arte Británico----------" << endl;
	
	while (opc!=5){
	
		cout << "\nIngrese la opción que desea:\n1.Agregar\n2.Eliminar\n3.Generar Reporte\n4.Transferir a otro Museo\n5.Generar reporte de Obras transferidas\n6.Buscar: ";
		cin >> opc;

	switch(opc){//MENU PRINCIPAL

		case 1:{//AGREGAR
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
				cout << endl << "AGREGADO";
			//FIN LITERATURA

			}else if(opcObras==2){ //ESCULTURA
				cout << endl << "Ingrese el peso: ";
				cin >> peso;
				cout << "Ingrese material: ";
				cin >> material;
				Escultura* esc = new Escultura(peso, material, ID, nombre_obra, fecha, autor);
				obras.push_back(esc);
				cout << endl << "AGREGADO!!!" << endl;
								
			//FIN ESCULTURA
				
			}else if (opcObras==3){//ARQUITECTURA
				cout << endl << "Ingrese el tipo de terreno: ";
				cin >> tipo;
				DisArq* arquitectura = new DisArq(tipo, ID, nombre_obra, fecha, autor);
				obras.push_back(arquitectura);
				cout << endl << "AGREGADO!!!" << endl;

			//FIN ARQUITECTURA

			}else if (opcObras==4){//PINTURA
				cout  << endl << "Ingrese el Lienzo: ";
				cin >> lienzo;
				cout << "Ingrese el tipo de técnica: ";
				cin >> tec;
				Pintura* paint = new Pintura(lienzo, tec, ID, nombre_obra, fecha, autor);
				obras.push_back(paint);
				cout << endl << "AGREGADO!!!" << endl;

			//FIN PINTURA

			}else
				cout << "OPCION INVALIDA";
			}
		break;//FIN AGREGAR
		
		case 2://ELIMINAR
			cout << "-------------ELIMINAR---------" << endl << endl;
			int pos;
			for (int i=0; i < obras.size(); i++){
				cout << obras[i]->getID() << " " << obras[i]->getNombre() << " " << obras[i]->getFecha() << " " << obras[i]->getAutor() << endl;
			}
			cout << "Ingrese la posición que desea eliminar: ";
			cin >> pos;
			
			if (pos < 0 || pos > obras.size())
				cout << "Posicion inexistente";
			else
			obras.erase(pos+obras.begin());

			cout << endl << "El vector a quedado asi: " << endl;
			
			for (int i=0; i < obras.size(); i++){
            cout << obras[i]->getID() << " " << obras[i]->getNombre() << " " << obras[i]->getFecha() << " " << obras[i]->getAutor() << endl;
         }
		//FIN ELIMINAR
		break;

		case 3: //GENERAR REPORTE NORMAL
			cout << "----REPORTE INVENTARIO DEL MUSEO-----" << endl << endl;
			for (int i=0; i < obras.size(); i++){
            cout << i <<<"." << obras[i]->getID() << " " << obras[i]->getNombre() << " " << obras[i]->getFecha() << " " << obras[i]->getAutor() << endl;
         }//FIN GENERAR REPORTE

		

		

	}//FIN MENU PRINCIPAL
		


	}

return 0;
}

int generarID(){
	
}
