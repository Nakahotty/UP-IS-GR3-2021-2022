#include <iostream>

using namespace std;

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverse(int* arr, int size) {
    int* ptr = arr; // pointing at first element
    int* ptrEnd = arr + size - 1; // pointer at last element

    while (ptr < ptrEnd) {
        swap(ptr, ptrEnd);
        ptr++;
        ptrEnd--;
    }
}

void printArr(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int array [5] = {9, 4, 5, 3, 8};
    printArr(array, 5);
    cout << endl;
    reverse(array, 5);
    printArr(array, 5);
}