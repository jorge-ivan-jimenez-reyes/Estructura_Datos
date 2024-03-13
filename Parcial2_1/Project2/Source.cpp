
#include "ColaCircular.h"

using namespace std;

int main() {
    ColaCircular C;
    C.Mostrar();
    C.Insertar("AA");
    C.Insertar("BB");
    C.Insertar("CC");
    C.Extraer();
    C.Insertar("DD");
    C.Insertar("EE");
    C.Insertar("FF");
    C.Insertar("GG");
    C.Insertar("HH");
    C.Extraer();
    C.Extraer();
    C.Mostrar();

    
}
