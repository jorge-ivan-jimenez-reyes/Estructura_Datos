#pragma once
#include <string>

class lista 
{
public:
    lista(); 
    ~lista(); 
    void insertar_al_inicio(std::string); 
    void insertar_en_posicion(std::string, int); 
    void insertar_al_final(std::string);
    void imprimir() const;
private:
    struct nodo 
    {
        std::string dato;
        nodo* siguiente{}; 
    };

    nodo* cabeza_;
};
