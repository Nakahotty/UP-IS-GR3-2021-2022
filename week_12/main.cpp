#include <iostream>

using namespace std;

int fact(int n) {
    if (n < 0) {
        return -1;
    }

    if (n == 0) {
        return 1;
    }

    return n * fact(n-1);
}

int fib(int n) {
    if (n == 0 || n == 1) {
        return n;
    }

    return fib(n-1) + fib(n-2);
}

int main() {
    int f = fact(5);
    cout << f << endl;

    // 0,1,1,2,3,5,8,13
    cout << fib(fib(5)) << endl;
    cout << fib(7) << endl;
    cout << fib(8) << endl;
}