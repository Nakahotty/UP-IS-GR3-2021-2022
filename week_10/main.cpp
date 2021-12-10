#include <iostream>

using namespace std;

void increment(int& x) {
    x += 30;

    // <body>....
}

int main() {
    // Address-of оператор - &
    // addres - 0x_____
    // подаваме по референция променливата x == &x

    // int x = 5;
    // cout << x << endl;
    // cout << &x << endl;

    // increment(x);
    // cout << x;

    // pointers
    // synthax: <object_type> *<object_name_pointer> = &<object_name_transmitter>;

    int x = 5;
    int* ptr = &x;
    cout << "Address of X: " << &x << endl;
    cout << "Pointer to X (value in ptr): " << ptr << endl; 
    cout << "Address of ptr: " << &ptr << endl; 

    // операции с *ptr

    cout << *ptr << endl;        // x == *ptr (ДОРИ КАТО АДРЕС В ПАМЕТТА!)
    cout << ++*ptr << endl;
    cout << x << endl;
    cout << --x << endl;
    cout << *ptr << endl;

    int *ptr1, *ptr2;

    // references
    // int* ptr = &x  -> ADDRESS!
    // int& ref = x   -> ПСЕВДОНИМ

    int value = 6;
    int& referenceValue = value;
    cout << referenceValue++ << endl;
    cout << value++ << endl;

}