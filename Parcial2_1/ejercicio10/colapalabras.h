#include <iostream>

using namespace std;

class Cola {
public:
	Cola();
	~Cola();
	void encolar(string);
	string desencolar();
	void imprimir();
	void mostrar_parametros();

private:
	string datos[100];
	string cabeza;
	int minimo, maximo, tope;
};
