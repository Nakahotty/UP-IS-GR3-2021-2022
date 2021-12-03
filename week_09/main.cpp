#include <iostream>

using namespace std;

void increment(int& x) {
    x += 30;
}

int main() {
    // Address-of оператор - &
    // addres - 0x_____
    // подаваме по референция променливата x == &x

    int x = 5;
    cout << x << endl;
    cout << &x << endl;

    increment(x);
    cout << x;
}