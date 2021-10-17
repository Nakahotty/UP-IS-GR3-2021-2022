#include <iostream>

using namespace std;

int main() {
    int number; 
    // cout << "Enter number:";
    // cin >> number;

    cout << 'a' - 5 << endl;

    // явно кастване
    double d = 3.1453 * 2.0;

    // неявно кастване
    int integer = d;
    cout << integer << endl;

    int b = 6;
    cout << ++b << endl;

    bool hasWife = true;
    bool hasJob = false;

    int num1 = 7;
    int num2 = 7;

    bool doesWell = hasWife && hasJob;
    bool b1 = hasWife != hasJob;

    bool areEqual = num1 == num2;
    cout << doesWell << endl;
    cout << areEqual << endl;
}