#include <iostream>
#include <string>
#include "bodega.h"
#include "ingredientes.h"
#include "platos.h"
#include <fstream>
using namespace std;

Bodega::Bodega(){
}

Bodega::Bodega(int pCantidad){
	this->cantidad=pCantidad;


}
    //getter
int Bodega::getCantidad(){
	return cantidad;
}

vector<Ingredientes*> Bodega::getDisponible(){
	return disponible;


}
vector<Platos*> Bodega::getMenu(){
	return menu;

}
//setter
void Bodega::setMenu(Platos* plat){
	menu.push_back(plat);
}

void Bodega::setDisponible(Ingredientes* d){

	disponible.push_back(d);

}
void Bodega::setCantidad(int c){
	cantidad=c;

}
void Bodega::escribirarchivo(){
	ofstream archivo;
	archivo.open("ingredientes.txt",ios::ate);

	for(int i=0;i<disponible.size();i++){
		archivo<<disponible[i]->getNombre()<<endl;

	
	
	}
	archivo.close();

}
void Bodega::cargararchivo(){
	ifstream archivo;
	string nombre,tipo;
	int aportealsabor,duracion;

	archivo.open("ingredientes.txt",ios::in);
	while(!archivo.eof()){
		getline(archivo,nombre);
		
		setDisponible(new Ingredientes(nombre,"",0,0));
	}
	archivo.close();
}
void Bodega::escribirarchivoplato(){
	ofstream archivo;
	archivo.open("platos.txt",ios::ate);

	for(int i=0;i<menu.size();i++){
		archivo<<menu[i]->getOrigen()<<endl;
	
	}
	archivo.close();

}
void Bodega::cargararchivoplato(){
	ifstream archivo;
	string origen;
	archivo.open("platos.txt",ios::in);
	while(!archivo.eof()){
		getline(archivo,origen);
		setMenu(new Platos(origen,0,0,0,0));
	}
	archivo.close();


}
///
