// char_operations.cpp
#include <iostream>
#include "CharArray.h"

void generateCharArray(char array[], int size) {
    for (int i = 0; i < size; ++i) {
        array[i] = 'a' + std::rand() % 26;
    }
}

void printCharArray(const char array[], int size, const char message[]) {
    std::cout << message << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

void findSymbolPosition(const char symbols[], int size, char targetSymbol) {
    std::cout << "Finding position and value of symbol with code " << static_cast<int>(targetSymbol) << ":" << std::endl;

    int position = -1;

    for (int i = 0; i < size; ++i) {
        if (symbols[i] == targetSymbol) {
            position = i;
            break;
        }
    }

    if (position != -1) {
        std::cout << "Symbol found at position: " << position << std::endl;
        std::cout << "Symbol value: " << symbols[position] << std::endl;
    }
    else {
        std::cout << "Symbol not found." << std::endl;
    }
}
