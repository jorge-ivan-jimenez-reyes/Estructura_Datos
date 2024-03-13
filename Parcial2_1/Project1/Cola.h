#include <iostream>
#pragma once
#define TAM 6
using namespace std;

class Cola
{
	public:
	Cola();
	int Insertar(string);
	string Extraer();
	string Consultar();
	void Mostrar();

	private:
		int min, max;
		int inicio, final;
		string* arreglo;
};

