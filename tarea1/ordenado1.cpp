#include "ordenado1.h"

#include <algorithm>
#include <iostream>

void Ordenador::ordenarEnteros(std::vector<int>& arr) {
    std::sort(arr.begin(), arr.end());
}

void Ordenador::ordenarStrings(std::vector<std::string>& arr) {
    std::sort(arr.begin(), arr.end());
}

void Ordenador::mostrarEnteros(const std::vector<int>& arr) {
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

void Ordenador::mostrarStrings(const std::vector<std::string>& arr) {
    for (const std::string& str : arr) {
        std::cout << str << " ";
    }
    std::cout << std::endl;
}
