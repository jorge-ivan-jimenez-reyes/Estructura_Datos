
#include <iostream>
#include <string>

using namespace std;

class DosDimArr {
public:
    DosDimArr(int filas, int columnas);

    ~DosDimArr();

    void name();

    void mostrar();

    void ordenar();

    void llenar();

private:
    int** matriz;
    int filas;
    int columnas;
    string nombre;
};


