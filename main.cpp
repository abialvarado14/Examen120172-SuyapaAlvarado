#include<iostream>
#include<string>
#include<vector>
#include "Obras.h"
#include "Escultura.h"
#include "Pintura.h"
#include "Literatura.h"
#include "DisArq.h"

using namespace std;
string generarID();

int main(){

	int opc, opcObras;
	double peso;
	string fecha, autor, epoca, genero, nombre_obra, material, tipo, lienzo, tec, search, ID="HD";
	vector<Obras*> obras;
	vector <Obras*> transferidos;
	cout << "----------Museo de Arte Británico----------" << endl;
	
	while (opc!=7){
	
		cout << "\nIngrese la opción que desea:\n1.Agregar\n2.Eliminar\n3.Generar Reporte\n4.Transferir a otro Museo\n5.Generar reporte de Obras transferidas\n6.Buscar:\n7.Salir ";
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
            cout << i << "." << obras[i]->getID() << " " << obras[i]->getNombre() << " " << obras[i]->getFecha() << " " << obras[i]->getAutor() << endl;
         }
		//FIN GENERAR REPORTE
		break;

		case 4://TRANSFERIR A OTRO MUSEO
			cout << "-----------TRANSFERENCIA--------" << endl << endl;
			int postrans;
			for (int i=0; i < obras.size(); i++){
            cout << i << "." << obras[i]->getID() << " " << obras[i]->getNombre() << " " << obras[i]->getFecha() << " " << obras[i]->getAutor() << endl;
			}
			cout << "Que posición desea transferir? ";
			cin >> postrans;

			if (postrans<0 || postrans >= obras.size())
				cout << "POSICION INEXISTENTE";
			else{
				transferidos.push_back(obras[postrans]);
				obras.erase(postrans+obras.begin());
				cout << "TRANSFERENCIA HECHA!!" << endl << endl;
			}
		//FIN TRANSFERIR A OTRO MUSEO
		break;

	case 5: //REPORTE DE TRANSFERENCIA
		cout << "--------REPORTE DE TRANSFERENCIA-----" << endl << endl;

		for (int i=0; i < transferidos.size(); i++){
            cout << i << "." << transferidos[i]->getID() << " " << transferidos[i]->getNombre() << " " << transferidos[i]->getFecha() << " " << transferidos[i]->getAutor() << endl;
         }

	//FIN REPORTE TRANSFERENCIA
	break;

	case 6: //BUSCAR
		cout << "Ingrese el nombre del autor que desea buscar: ";		
		cin >> search;
		int cont=0;
		
		for (int i=0; i < obras.size(); i++){
			if (obras[i]->getAutor()== search){
   	   cout << obras[i]->getNombre() << endl;
			cont++;
			}
  		  }
	    
		if (cont==0)
			cout << "No hay obras de ese autor";

	//FIN BUSCAR
	break;

		

		

	}//FIN MENU PRINCIPAL
		


	}

return 0;
}

string generarID(){

	string letras[] = {"A","B","C","D","E","F"};
	int numeros[] = {0,1,2,3,4,5,6,7,8,9};

	
}
