

class Nodo {
public:
    int dato;
    Nodo* siguiente;

    Nodo(int val) : dato(val), siguiente(nullptr) {}
};

class Pila {
public:
    Pila();
    ~Pila();

    void empujar(int val);
    int sacar();
    void mostrar();
    bool estaVacia();

private:
    Nodo* cima;
};

