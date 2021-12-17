#include <iostream>

using namespace std;

const int CAPACITY = 100;

// stack -> заделяне и освобождаване на памет се управлява автоматично от компилатора
// heap  -> заделяне и освобождаване на памет се управлява от НАС (програмиста)

int main() {
    int* ptr2 = new int[CAPACITY];
    delete[] ptr2;
}