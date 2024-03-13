#pragma once
#include <iostream>
using namespace std;
#define TAM 6


class ColaCircular
{
public:
	ColaCircular();
	int Insertar(string);
	string Extraer();
	void Mostrar();
	
private:
	int min, max;
	int inicio, final;
	string* palabras;
};

