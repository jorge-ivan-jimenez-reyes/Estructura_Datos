#pragma once

class circular_list
{
public:
    
    circular_list();
    ~circular_list() = default;

   
    void insertar_al_final(int);
    void imprimir();
    bool buscar(int);
    int tamano();
    static void existe(bool);

private:
   
    struct nodo
    {
        int dato{};
        nodo* siguiente{}; 
    };

    
    nodo* cabeza_, * cola_, * temporal_;
};
