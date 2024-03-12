#pragma once
#include <iostream>
#include <string>
#include <locale>

struct Empleado {
    std::string nom;
    int esta;
    float sdo;
};

class Empresa {
public:
    Empresa();
    ~Empresa();
    bool Insertar(const Empleado& persona);
    bool Borrar(const std::string& nombreBorrar);
    void Ordenar();
    void Mostrar() const;

private:
    static const int tamano = 8;
    Empleado personal[tamano];
    int ocupados;
};
