#include "BrazoRobotico.h"

// Constructor

BrazoRobotico::BrazoRobotico(double x_ini, double y_ini, double z_ini) : x(x_ini), y(y_ini), z(z_ini), sujeta_obj(false){}

// Métodos consultores

double BrazoRobotico::getX() const {
	return x;
}
double BrazoRobotico::getY() const {
	return y;
}
double BrazoRobotico::getZ() const {
	return z;
}

bool BrazoRobotico::SujetaObj() const {
	return sujeta_obj;
}

void BrazoRobotico::coger(){
	if (!sujeta_obj){
		sujeta_obj = true;
	}
}

void BrazoRobotico::soltar() {
	if (sujeta_obj){
		sujeta_obj = false;
	}
}

void BrazoRobotico::mover (double nuevoX, double nuevoY, double nuevoZ){
	x = nuevoX;
	y = nuevoY;
	z = nuevoZ;
}
