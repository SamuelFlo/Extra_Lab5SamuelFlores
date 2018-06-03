#include "ingredientes.h"
#include <iostream>
#include<string>

using namespace std;

Ingredientes::Ingredientes(){}

Ingredientes::Ingredientes(string pNombre,string pTipo, int pAportealsabor, int pDuracion){
	this->nombre=pNombre;
	this->tipo=pTipo;
	this->aportealsabor=pAportealsabor;
	this->duracion=pDuracion;

}
//getter
string Ingredientes::getNombre(){
	return nombre;

}
string Ingredientes::getTipo(){
	return tipo;

}
int Ingredientes::getAportealsabor(){
	return aportealsabor;

}
int Ingredientes::getDuracion(){
	return duracion;

}

void Ingredientes::setNombre(string no){
	nombre=no;


}
void Ingredientes::setTipo(string ti){
	tipo=ti;

}
void Ingredientes::setAportealsabor(int apor){
	aportealsabor=apor;


}
void Ingredientes::setDuracion(int dura){
	duracion=dura;


}
