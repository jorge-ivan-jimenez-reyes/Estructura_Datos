#pragma once
#include <string>

struct comprador
{
    std::string nombre{};
    int numero{};
};

class Concierto
{
public:
    Concierto();
    ~Concierto();
    void encolar(comprador);
    void desencolar();
    void frente() const;
    void atras() const;
    int tamano() const;
    bool vacio() const;
    bool lleno() const;
    void imprimir() const;
    void afortunados() const;
private:
    comprador datos_[20]{};
    int min_, max_, tope_;
    comprador cabeza_;
};
