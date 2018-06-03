#ifndef BODEGA_H
#define BODEGA_H

#include <iostream>
#include <string>
#include <vector>
#include "ingredientes.h"
#include "platos.h"
using namespace std;

class Bodega{
	public:
		vector<Ingredientes*>disponible;
	       	int cantidad;	
		vector<Platos*>menu;
		Ingredientes* ingre;

		Bodega();
		Bodega(int);
		//getter
		int getCantidad();
		vector<Ingredientes*> getDisponible();
		vector<Platos*> getMenu();
		//setter
		void setCantidad(int);
		void setMenu(Platos*);
		void setDisponible(Ingredientes*);
		
		void escribirarchivo();
		void cargararchivo();

		void escribirarchivoplato();
		void cargararchivoplato();



};
#endif
