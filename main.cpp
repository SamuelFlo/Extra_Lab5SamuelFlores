#include <iostream>
#include "bodega.h"
#include "platos.h"
#include "ingredientes.h"
#include <string>
#include <vector>


using namespace std;

int main(){
	Bodega* b=new Bodega();
	vector<Platos*>plato;
	Ingredientes* I=new Ingredientes();
	int opcion=0;
	int contador=0;
	bool seguir=false;
	string nombre="";
	string tipo="";
	int aportealsabor=0;
	string origen="";
	int cantidadsabor=0,registrococinado=0,precio=0,valoracionpromedio=0;
	int duracion=0;
	int containgre=0;
	int contaplato=0;
	b->cargararchivo();
	b->cargararchivoplato();
	while(seguir!=true){
		cout<<"1. Agregar ingredientes"<<endl;
		cout<<"2. Listar ingredientes"<<endl;
		cout<<"3. Agregar a plato"<<endl;
		cout<<"4. Listar platos"<<endl;
		cout<<"5. Comprar"<<endl;
		cout<<"6. Ver Bodega"<<endl;
		cout<<"7. Salir"<<endl;
		cin>>opcion;
		switch(opcion){
			case 1:
				/*string nombre="";
				string tipo="";
				int aportealsabor=0;
				int duracion=0;*/
				cout<<"INGREDIENTES"<<endl;
				cout<<"Ingrese el nombre del ingrediente: "<<endl;
				cin>>nombre;

				cout<<"Ingrese el tipo del ingrediente: "<<endl;
				cin>>tipo;
				cout<<"Ingrese el aporte al sabor del plato: "<<endl;
				cin>>aportealsabor;
				cout<<"Ingrese la duracion: "<<endl;
				cin>>duracion;
				b->setDisponible(new Ingredientes(nombre,tipo,aportealsabor,duracion));
			//	cout<<b->getDisponible().size();
				/*for(int i=0;i<b->getDisponible().size();i++){
					cout<<"["<<b->getDisponible()[i]->getNombre()<<"]";
				
				
				}
				cout<<endl;*/
				b->escribirarchivo();
				break;
			case 2:
				for(int i=0;i<b->getDisponible().size();i++){
					cout<<"["<<b->getDisponible()[i]->getNombre()<<"]";
				}
				cout<<endl;
				break;
			case 3:
				cout<<"PLATOS"<<endl;
				cout<<"Ingrese el origen: "<<endl;
				cin>>origen;
				cout<<"Ingrese la cantidad del sabor: "<<endl;
				cin>>cantidadsabor;
				cout<<"Ingrese registro cocinado: "<<endl;
				cin>>registrococinado;
				cout<<"Ingrese el precio: "<<endl;
				cin>>precio;
				cout<<"Ingrese la valoracion promedio: "<<endl;
				cin>>valoracionpromedio;
				b->setMenu(new Platos(origen,cantidadsabor,registrococinado,precio,valoracionpromedio));
				b->escribirarchivoplato();
				break;
			case 4:
				for(int i=0;i<b->getMenu().size();i++){
					cout<<"["<<b->getMenu()[i]->getOrigen()<<"]";

				}
				cout<<endl;
				break;
			case 5:
				cout<<"Comprar"<<endl;
				for(int i=0;i<b->getMenu().size();i++){
					cout<<i<<")"<<"["<<b->getMenu()[i]->getOrigen()<<"]";
					cout<<endl;

				}
				int compra;
				cout<<"Ingrese la posicion del plato que desea comprar: "<<endl;
				cin>>compra;
				b->getMenu().erase(b->getMenu().begin()+compra);
				break;
			case 6:

				for(int i=0;i<b->getDisponible().size();i++){
					cout<<"["<<b->getDisponible()[i]->getNombre()<<"]";
				}
				cout<<endl;
				break;
			case 7:
				seguir=true;
				break;
	
		}

	}


	return 0;
}

