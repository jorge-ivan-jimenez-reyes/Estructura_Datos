#pragma once
#include <iostream>
#define TAM 5
using namespace std;

class Cola
{
public:
	Cola();
	int Insertar(int);
	int Extraer();
	void Mostrar();
private:
	int min, max, principio, final;
	int nums[TAM];
};

