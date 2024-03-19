#include "colapalabras.h"

void colapalabras::enqueue(const std::string& word) {
    words.push(word);
}

void colapalabras::dequeue() {
    if (!words.empty()) {
        words.pop();
    }
}

void colapalabras::display() const {
    std::queue<std::string> temp = words;
    while (!temp.empty()) {
        std::cout << temp.front() << " ";
        temp.pop();
    }
    std::cout << std::endl;
}
