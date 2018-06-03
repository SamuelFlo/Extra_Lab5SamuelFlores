#ifndef INGREDIENTES_H
#define INGREDIENTES_H
#include <iostream>
#include <string>

using namespace std;


class Ingredientes{
	private:
		string nombre;
		string tipo;
		int aportealsabor;
		int duracion;
	public:
		Ingredientes();
		Ingredientes(string,string,int,int);
		//getter
		string getNombre();
		string getTipo();
		int getAportealsabor();
		int getDuracion();
		//setter
		void setNombre(string);
		void setTipo(string);
		void setAportealsabor(int);
		void setDuracion(int);


};




#endif
