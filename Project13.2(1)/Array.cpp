// array_operations.cpp
#include <iostream>
#include <cstdlib>
#include "Array.h"

void generateArray(int array[], int size, int max_value) {
    for (int i = 0; i < size; ++i) {
        array[i] = std::rand() % max_value;
    }
}

void printArray(const int array[], int size, const char message[]) {
    std::cout << message << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

void countOccurrences(const int numbers[], int size) {
    std::cout << "Counting occurrences of each number:" << std::endl;

    for (int i = 0; i < size; ++i) {
        int count = 0;

        for (int j = 0; j < i && !count; ++j) {
            count += (numbers[j] == numbers[i]);
        }

        if (!count) {
            count = 1;
            for (int j = i + 1; j < size; ++j) {
                count += (numbers[j] == numbers[i]);
            }

            std::cout << "Number " << numbers[i] << " occurs " << count << " times." << std::endl;
        }
    }
}
