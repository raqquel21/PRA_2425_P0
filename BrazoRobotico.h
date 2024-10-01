#ifndef BRAZOROBOTICO_H
#define BRAZOROBOTICO_H


class BrazoRobotico {
	private:
		double x, y, z;
		int sujeta_obj;
	public:
		// Método constructor (inicializo los valores)
		BrazorRobotico(double x_ini = 0, double y_ini = 0, double z_ini = 0);
		// 4 métodos consultores
		double getX() const;
		double getY() const;
		double getZ() const;
		bool SujetaObj() const;

		// Funciones:
		void coger();
		void soltar();
		void mover(double nuevoX, double nuevoY, double nuevoZ);

};

#endif // BRAZOROBOTICO_H
