#include <iostream>

using namespace std;

double sum(double n = 0, double m = 0);
bool isEven(int n);
int f();
void hello();
void output(double n);   // output(double n)
void output(bool n);     // output(bool n)
void output(int n);     // output(int n)

int main() {
    int n = 500;
    int m = 600;

    hello();
    output(sum(n,m));
}

void hello() {
    cout << "Hello Nasko." << endl;
}

double sum(double n, double m) {
    return n + m;
}

bool isEven(int n) {
    return n % 2 == 0;
}

void output(double n) {
    cout << "Result = " << n << endl;
}

void output(bool n) {
    if (n) {
        cout << "true";
    } else {
        cout << "false";
    }
}

void output(int n) {
    
}