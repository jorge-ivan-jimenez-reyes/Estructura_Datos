#include "colapalabras.h"
#include <iostream>


int main() {
    colapalabras wordQueue;

    // Enqueue words
    wordQueue.enqueue("hello");
    wordQueue.enqueue("world");
    wordQueue.enqueue("openai");

    std::cout << "Queue: ";
    wordQueue.display();

    // Dequeue one word
    wordQueue.dequeue();

    std::cout << "After dequeuing: ";
    wordQueue.display();

    return 0;
}
