#pragma once
#include <string>

struct Cliente
{
public:
	Cliente() = default;
	std::string nombre{};
	int id{};
};

struct Nodo
{
	Nodo* izquierdo;
	Cliente datos;
	Nodo* derecho;
};

class ArbolBinario
{
public:
	ArbolBinario();
	~ArbolBinario();
	void crear_arbol(const Cliente&);
	Nodo* obtener_raiz() const;
	void insertar(Nodo*);
	static void buscar(const Nodo*, int, ArbolBinario);
	void recorrido_postorden(const Nodo*);
	int obtener_nivel(const Nodo*);

private:
	Nodo* raiz_{}, * temp_{};
};
