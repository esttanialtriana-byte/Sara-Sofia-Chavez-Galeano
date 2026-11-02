#pragma once
#include <iostream>
class cnodo {
public:
	int ainfo;
	cnodo* asing; //Clase autoreferenciada (puntero al siguiente nodo)

	cnodo() { asing = NULL; }
	cnodo(int pdato)
	{
		ainfo = pdato; asing = NULL;
	}
};


