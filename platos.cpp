#include "platos.h"
#include <iostream>
#include <string>
#include "ingredientes.h"

using namespace std;

Platos::Platos(){}

Platos::Platos(string pOrigen, int pCantidadsabor, int pRegistrococinado, int pPrecio, int pValoracionpromedio){
	this->origen=pOrigen;
	this->cantidadsabor=pCantidadsabor;
	this->registrococinado=pRegistrococinado;
	this->precio=pPrecio;
	this->valoracionpromedio=pValoracionpromedio;
}
//getter
Ingredientes* Platos::getCantidad(int i){
	return cantidad[i];

}
string Platos::getOrigen(){
	return origen;
}
int Platos::getCantidadsabor(){
	return cantidadsabor;

}
int Platos::getRegistrococinado(){
	return registrococinado;

}
int Platos::getPrecio(){
	return precio;
	
}
int Platos::getValoracionpromedio(){
	return valoracionpromedio;

}
//setter
void Platos::setCantidad(Ingredientes* ca){
	cantidad.push_back(ca);


}
void Platos::setOrigen(string orig){
	origen=orig;

}
void Platos::setCantidadsabor(int canti){
	cantidadsabor=canti;

}
void Platos::setRegistrococinado(int regi){
	registrococinado=regi;

}
void Platos::setPrecio(int pre){
	precio=pre;

}
void Platos::setValoracionpromedio(int valo){
	valoracionpromedio=valo;

}
