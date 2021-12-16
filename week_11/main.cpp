#include <iostream>

using namespace std;

int main() {
    // ПРЕГОВОР:
    
    int value = 5;
    int* ptr = &value;
    int &ref = value;

    cout << *ptr << endl;
    cout << ref << endl;

    // ref = 7;
    // *ptr = 2132;
}