#pragma once
#include <iostream>
using namespace std;

struct Entero
{
	int num;
	Entero* sig;
};


class Colaligada
{
public:
	Colaligada ();
	int Consultar ();
	int Extraer ();
	void Insertar (int);
	void Mostrar ();

private:
	Entero* inicio, * final, * nodo;
};

