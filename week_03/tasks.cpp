#include <iostream>

using namespace std;

int main() {
    // 0)
    // int num;
    // cout << "Enter number: ";
    // cin >> num;

    // if (num % 2 == 0) {
    //     cout << "Divided by 2" << endl;
    // } else {
    //     cout << "NOT divided by 2" << endl;
    // }

    // 1) calculator
    // char op;
    // double num1, num2;

    // cout << "Enter operator (+, -, *, /): ";
    // cin >> op;

    // cout << "Enter two numbers: ";
    // cin >> num1 >> num2;

    // if (op == '+') {
    //     cout << "Sum: " << num1 + num2 << endl;
    // } else if (op == '-') {
    //     cout << "Substraction: " << num1 - num2 << endl;
    // } else if (op == '*') {
    //     cout << "Multiplication: " << num1 * num2 << endl;
    // } else if (op == '/') {
    //     if (num2 != 0) {
    //         cout << "Division: " << num1 / num2 << endl;
    //     } else {
    //         cout << "You cannot divide by zero!" << endl;
    //     }
    // } else {
    //     cout << "Wrong operator entered!" << endl;
    // }

    // return 0;

    // 2) unique numbers
    int num;
    cout << "Enter number: ";
    cin >> num;

    int first, second, third, fourth;
    // num <= 9999  -> [1000, 9999]
    // това беше излишна проверка, може директно да проверим така
    if (num >= 1000 && number <= 9999) {
        fourth = num % 10; 
        num /= 10;
        third = num % 10;
        num /= 10;
        second = num % 10;
        first = num / 10;

        bool hasUniqueDigits =  (first != second) && 
                                (second != third) &&
                                (third != fourth) && 
                                (fourth != first) &&
                                (first != third)  &&
                                (second != fourth);
    
        if (hasUniqueDigits) {
            cout << "YES, all the numbers are different!" << endl;
        } else {
            cout << "NO, not all numbers are different!" << endl;
        }
    } else {
        cout << "Number is not 4 digits" << endl;
    }
}