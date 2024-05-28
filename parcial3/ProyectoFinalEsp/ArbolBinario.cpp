#include <iostream>
#include "ArbolBinario.h"

using namespace std;

ArbolBinario::ArbolBinario() { raiz_ = nullptr; }

ArbolBinario::~ArbolBinario() = default;

void ArbolBinario::crear_arbol(const Cliente& valor)
{
	temp_ = new Nodo;
	temp_->datos = valor;
	temp_->izquierdo = nullptr;
	temp_->derecho = nullptr;
}

Nodo* ArbolBinario::obtener_raiz() const { return raiz_; }

void ArbolBinario::insertar(Nodo* valor)
{
	if (raiz_ == nullptr)
	{
		raiz_ = temp_;
		cout << "Nodo RAIZ fue agregado" << endl;
		return;
	}
	if (temp_->datos.id < valor->datos.id)
	{
		if (valor->izquierdo == nullptr)
		{
			valor->izquierdo = temp_;
			cout << "Nodo agregado a la IZQUIERDA de ----> " << valor->datos.id << endl;
			return;
		}
		insertar(valor->izquierdo);
		return;
	}
	if (temp_->datos.id > valor->datos.id)
	{
		if (valor->derecho == nullptr)
		{
			valor->derecho = temp_;
			cout << "Nodo agregado a la DERECHA de ----> " << valor->datos.id << endl;
			return;
		}
		insertar(valor->derecho);
		return;
	}
	if (temp_->datos.id == valor->datos.id)
	{
		cout << "Nodo ya existe" << endl;
	}
}

int ArbolBinario::obtener_nivel(const Nodo* valor) {
	int nivel = 0;
	temp_ = raiz_;
	while (temp_ != valor)
	{
		if (valor->datos.id < temp_->datos.id)
		{
			temp_ = temp_->izquierdo;
			nivel++;
		}
		else if (valor->datos.id > temp_->datos.id)
		{
			temp_ = temp_->derecho;
			nivel++;
		}
	}
	return nivel;
}

void ArbolBinario::buscar(const Nodo* valor, const int clave, ArbolBinario arbol)
{
	if (valor == nullptr)
	{
		cout << "Nodo no encontrado" << endl;
		return;
	}
	if (valor->datos.id == clave)
	{
		cout << "Nodo encontrado" << endl;
		cout << "ID: " << valor->datos.id << endl;
		cout << "Nombre: " << valor->datos.nombre << endl;
		cout << "Nivel: " << arbol.obtener_nivel(valor) << endl;
		return;
	}
	if (clave < valor->datos.id)
	{
		buscar(valor->izquierdo, clave, arbol);
		return;
	}
	if (clave > valor->datos.id)
	{
		buscar(valor->derecho, clave, arbol);
	}
}

void ArbolBinario::recorrido_postorden(const Nodo* inicio)
{
	if (!raiz_)
	{
		cout << "El árbol está vacío" << endl;
		return;
	}
	if (inicio->izquierdo != nullptr) recorrido_postorden(inicio->izquierdo);
	if (inicio->derecho != nullptr) recorrido_postorden(inicio->derecho);
	cout << "\t" << inicio->datos.id << "\t" << inicio->datos.nombre << endl;
}
