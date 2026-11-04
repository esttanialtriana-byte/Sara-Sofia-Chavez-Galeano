#pragma once
#include "cnodo.h" // Incluye la definición del nodo autorreferenciado
#include <iostream>

class ccola {
private:
	cnodo* aInicio; // Puntero al inicio de la estructura en memoria dinámic
	cnodo* aP;      // Puntero al primero (Frente de la cola)
	cnodo* aU;      // Puntero al último (Final de la cola)
	int aN;         // Cantidad de nodos guardados
	bool aI;        // Bandera de estado de la operación (true/false)

public:
	ccola();  // Constructor por defecto
	~ccola(); // Destructor para liberar memoria

	// Métodos Getters y Setters
	int getaN();
	void setaN(int paN);
	bool getaI();
	void setaI(bool paI);
	cnodo* getaInicio();
	void setaInicio(cnodo* paInicio);
	cnodo* getaP();
	void setaP(cnodo* paP);
	cnodo* getaU();
	void setaU(cnodo* paU);

	// Métodos principales de la Cola (FIFO) según el tablero del docente
	void mCrear(int pdato);    // Crea el primer nodo de la cola
	void mInsertar(int pdato); // Encola un nuevo nodo por el final (aU)
	int mEliminar();           // Desencola un nodo por el frente (aP)
	void mDestruir();          // Destruye toda la cola
};
