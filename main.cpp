#include <iostream>
#include "BrazoRobotico.h"

int main(){

	BrazoRobotico brazo(0,0,0);

	std::cout << "Posición inicial: (" << brazo.getX() << ", " << brazo.getY() << ", " << brazo.getZ() << ")" << std::endl;

	brazo.mover(5, 10,15);

	std::cout << "Posición final: (" << brazo.getX() << ", " << brazo.getY() << ", " << brazo.getZ() << ")" << std::endl;

	brazo.coger();
	// primera manera de imprimir

	std::cout << "Cogemos el objeto y lo comprobamos " << std::endl;

	if(brazo.SujetaObj()){
		std::cout <<"Sí está sujetando un objeto"<< std::endl;
	} else {
		std::cout << "No está sujetando el objeto" << std::endl;
	}

	std::cout << "Soltamos el objeto y lo comprobamos " << std::endl;

	brazo.soltar();
	//otra manera de imprimir
	
	std::cout << "¿El brazo sujeta un objeto?: " << (brazo.SujetaObj() ? "Sí" : "No") << std::endl; 

}
