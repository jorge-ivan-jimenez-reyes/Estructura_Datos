#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
#include <queue>
#include <string>

class colapalabras {
private:
    std::queue<std::string> words;

public:
    void enqueue(const std::string& word);
    void dequeue();
    void display() const;
};

#endif
