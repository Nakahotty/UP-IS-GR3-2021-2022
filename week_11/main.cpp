#include <iostream>

using namespace std;

void printArr(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

void printMatrix(int *(matrix)[10], int rows, int cols) {
    //...
}

void f(int x);

// without reference or pointer => will lose value of sum
void sumWithoutRefOrPointer(int numL, int numR, int sum)
{
    sum = numL + numR;
}

// with reference
void sumIt(int numL, int numR, int &sum)
{
    sum = numL + numR;
}

// with pointer
void sumIt(int numL, int numR, int *sum)
{
    *sum = numL + numR;
}

int main() {
    // ПРЕГОВОР:
    
    // int value = 5;
    // int* ptr = &value;
    // int &ref = value;

    // *ptr += 5;
    // ref -= 5;

    // cout << *ptr << endl;
    // cout << ref << endl;

    // int x = 5;
    // const int& ref = x;

    // const int y = 10;
    // const int& ref2 = y;
    // ref2 += 10;

    // const int* ptr2 = &value;
    // int* const ptr3 = &value;

    // *ptr2 += 10;
    // cout << *ptr2 << endl;


    // УКАЗАТЕЛИ И МАСИВИ

    // double arr[5] = { 4, 5, 6, 7.6, 9 };
    // cout << arr << endl; 
    // double *ptr = arr;
    // cout << ptr << endl; 

    // cout << sizeof(arr) << endl;
    // cout << sizeof(ptr) << endl;

    // int value = 7;
    // int *ptr = &value;
 
    // cout << ptr << '\n';
    // cout << ptr+1 << '\n';
    // cout << ptr+2 << '\n';
    // cout << ptr+3 << '\n';

    // указателна аритметика
    int array [5] = {9, 4, 5, 3, 8};
    cout << array[1] << endl;
    cout << *(array + 1) << endl;
    // cout << *(array + 3) << endl;
    // cout << array[0] << endl;
    // cout << *(array) << endl;
    // printArr(array, 5);

    int a = 6;
    int b = 7;
    int sum = 0;
    int* ptr = &sum;
    sumWithoutRefOrPointer(a,b,sum);
    cout << sum << endl;
    sumIt(a,b, sum);
    cout << sum << endl;
    sumIt(a,b, ptr);
    cout << sum << endl;
}