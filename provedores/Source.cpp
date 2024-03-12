#include <iostream>
#include "provedores.h"



int main() {
    provedores catalogo;
    int opc;
    do {
        cout << endl;
        cout << "-----------------MAIN MENU-----------------" << endl;
        cout << "1. Show All" << endl;
        cout << "2. Search" << endl;
        cout << "3. Add" << endl;
        cout << "0. Exit" << endl;
        cout << "Option: ";
        cin >> opc;
        switch (opc) {
        case 1:
            catalogo.show_all();
            break;
        case 2:
            catalogo.search();
            break;
        case 3:
            catalogo.add();
            break;
        case 0:
            break;
        default:
            cout << "Invalid option" << endl;
            break;
        }
    } while (opc != 0);
    cout << "-----------------END-----------------" << endl;
    return 0;
}
