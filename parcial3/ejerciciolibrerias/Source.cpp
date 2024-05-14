#include <iostream>
#include <queue>
#include <map>
#include <string>

using namespace std;

class SupermarketQueue {
private:
    map<char, queue<string>> queues;
    map<char, int> counters;

public:
    SupermarketQueue() {
        queues['A'] = queue<string>();
        queues['B'] = queue<string>();
        queues['C'] = queue<string>();
        counters['A'] = 0;
        counters['B'] = 0;
        counters['C'] = 0;
    }

    void addCustomer() {
        char minQueue = 'A';
        // Encuentra la caja con la fila más corta
        if (queues['B'].size() < queues[minQueue].size()) {
            minQueue = 'B';
        }
        if (queues['C'].size() < queues[minQueue].size()) {
            minQueue = 'C';
        }

        // Incrementar el contador y asignar turno
        counters[minQueue]++;
        string ticket = minQueue + to_string(counters[minQueue]);

        // Agregar cliente a la cola
        queues[minQueue].push(ticket);
        cout << "Cliente agregado al turno " << ticket << " en la caja " << minQueue << endl;
    }

    void serveCustomer(char queueId) {
        if (queues[queueId].empty()) {
            cout << "No hay clientes en la caja " << queueId << endl;
            return;
        }

        string customer = queues[queueId].front();
        queues[queueId].pop();
        cout << "Atendiendo al cliente con turno " << customer << " en la caja " << queueId << endl;
    }

    void displayQueue(char queueId) {
        if (queues[queueId].empty()) {
            cout << "La caja " << queueId << " está vacía." << endl;
        }
        else {
            cout << "Estado de la caja " << queueId << ": " << endl;
            cout << "Tamaño de la fila: " << queues[queueId].size() << endl;
            cout << "Primero en fila: " << queues[queueId].front() << endl;
            cout << "Último en fila: " << queues[queueId].back() << endl;
        }
    }
};

int main() {
    SupermarketQueue sq;

    // Simulación de llegada de clientes
    sq.addCustomer();
    sq.addCustomer();
    sq.addCustomer();
    sq.addCustomer();
    sq.addCustomer();

    // Atender a algunos clientes
    sq.serveCustomer('A');
    sq.serveCustomer('B');

    // Mostrar estado de las colas
    sq.displayQueue('A');
    sq.displayQueue('B');
    sq.displayQueue('C');

    return 0;
}
