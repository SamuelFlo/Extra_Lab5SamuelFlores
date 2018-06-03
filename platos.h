#ifndef PLATOS_H
#define PLATOS_H
#include <iostream>
#include <string>
#include <vector>
#include "ingredientes.h"
using namespace std;

class Platos{
	public:
		vector<Ingredientes*>cantidad;
		string origen;
		int cantidadsabor;
		int registrococinado;
		int precio;
		int valoracionpromedio;

		Platos();
		Platos(string,int,int,int,int);
		//getter
		Ingredientes* getCantidad(int);
		string getOrigen();
		int getCantidadsabor();
		int getRegistrococinado();
		int getPrecio();
		int getValoracionpromedio();
		//setter
		void setCantidad(Ingredientes*);
		void setOrigen(string);
		void setCantidadsabor(int);
		void setPrecio(int);
		void setRegistrococinado(int);
		void setValoracionpromedio(int);
	
	


};
#endif
