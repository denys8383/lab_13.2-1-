// main.cpp
#include <iostream>
#include <cstdlib>
#include "Array.h"
#include "CharArray.h"

int main() {
    const int ARRAY_SIZE = 10;

    int numbers[ARRAY_SIZE];
    char symbols[ARRAY_SIZE];

    std::srand(static_cast<unsigned>(std::time(nullptr)));

    generateArray(numbers, ARRAY_SIZE, 10);
    generateCharArray(symbols, ARRAY_SIZE);

    printArray(numbers, ARRAY_SIZE, "Generated numbers array:");
    printCharArray(symbols, ARRAY_SIZE, "Generated symbols array:");

    countOccurrences(numbers, ARRAY_SIZE);

    char targetSymbol = symbols[std::rand() % ARRAY_SIZE];
    findSymbolPosition(symbols, ARRAY_SIZE, targetSymbol);

    return 0;
}
