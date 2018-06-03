#include <iostream>
#include "bodega.h"
#include "platos.h"
#include "ingredientes.h"
#include <string>

using namespace std;

int main(){
	Bodega* b=new Bodega();
	Platos* p=new Platos();
	Ingredientes* I=new Ingredientes();
	int opcion=0;
	bool seguir=false;
	while(seguir!=true){
		cout<<"1. Agregar ingredientes"<<endl;
		cout<<"2. Agregar a plato"<<endl;
		cout<<"3. Comprar"<<endl;
		cout<<"4. Ver Bodega"<<endl;
		cout<<"5. Salir"<<endl;
		cin>>opcion;
		switch(opcion){
			case 1:
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				seguir=true;
				break;
	
		}

	}


	return 0;
}

