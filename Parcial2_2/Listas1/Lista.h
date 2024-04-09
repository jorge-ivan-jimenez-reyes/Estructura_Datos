#pragma once
#include <iostream>
using namespace std;


struct Palabra
{
	string pal;
	Palabra* sig;
};

class Lista
{
public:
	Lista();
	void InsertarInicio(string);
	int InsertarInter(string, string);
	int InsertarFinal(string);

private:
	Palabra* cabecera, * final, * nodo;


};

