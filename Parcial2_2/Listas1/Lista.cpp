#include "Lista.h" 

#include <iostream>
#include <utility>

using namespace std;

lista::lista() 
{
	cabeza_ = nullptr; 
}

lista::~lista() = default; 

void lista::insertar_al_inicio(std::string x) 
{
	const auto temp = new nodo; 
	temp->dato = std::move(x); 
	temp->siguiente = cabeza_;
	cabeza_ = temp; // 
}

void lista::insertar_en_posicion(string x, const int posicion) 
{
	const auto temp = new nodo;
	temp->dato = std::move(x); 
	temp->siguiente = nullptr;

	if (cabeza_ == nullptr) 
	{
		cabeza_ = temp; // Cambi� "head_" por "cabeza_"
	}
	else
	{
		nodo* temp1 = cabeza_; // Cambi� "node" por "nodo" y "head_" por "cabeza_"
		for (int i = 0; i < posicion - 1; i++) // Cambi� "position" por "posicion"
		{
			temp1 = temp1->siguiente; // Cambi� "next" por "siguiente"
		}
		temp->siguiente = temp1->siguiente; // Cambi� "next" por "siguiente"
		temp1->siguiente = temp; // Cambi� "next" por "siguiente"
	}
}

void lista::insertar_al_final(std::string x) // Cambi� "insert_at_end" por "insertar_al_final"
{
	const auto temp = new nodo; // Cambi� "node" por "nodo"
	temp->dato = std::move(x); // Cambi� "data" por "dato"
	temp->siguiente = nullptr; // Cambi� "next" por "siguiente"

	if (cabeza_ == nullptr) // Cambi� "head_" por "cabeza_"
	{
		cabeza_ = temp; // Cambi� "head_" por "cabeza_"
	}
	else
	{
		nodo* temp1 = cabeza_; // Cambi� "node" por "nodo" y "head_" por "cabeza_"
		while (temp1->siguiente != nullptr) // Cambi� "next" por "siguiente"
		{
			temp1 = temp1->siguiente; // Cambi� "next" por "siguiente"
		}
		temp1->siguiente = temp; // Cambi� "next" por "siguiente"
	}
}

void lista::imprimir() const // Cambi� "print" por "imprimir"
{
	const nodo* temp = cabeza_; // Cambi� "node" por "nodo" y "head_" por "cabeza_"
	while (temp != nullptr)
	{
		cout << temp->dato << "\t"; // Cambi� "data" por "dato"
		temp = temp->siguiente; // Cambi� "next" por "siguiente"
	}
	cout << endl;
}
