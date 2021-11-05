#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // 1) factoriel
    // int n;
    // cin >> n;

    // int sum = 1;
    // for (int i = 1; i <= n; i++) {
    //     sum *= i;
    // }

    // cout << sum;

    // 2)
    // int num;

    // int sum = 0;

    // while (true) {
    //     cin >> num;

    //     if (num == 0) {
    //         break;
    //     }

    //     sum += num;
    // }

    // cout << sum;

    // // 3)
    // int num;
    // cin >> num;

    // while (num > 0) {
    //     // sum += num % 10;
    //     num /= 10;
    // }

    // 4)
    // int num;
    // cin >> num;
    // bool isPrime = false;

    // for (int i = 2; i < num / 2; i++) {
    //     if (num % i == 0) {
    //         isPrime = true; // намерили сме делител
    //         break;
    //     }
    // }

    // if (isPrime) {
    //     cout << num << " is prime number" << endl;
    // } else {
    //     cout << num << " is NOT prime number" << endl;
    // }

    // continue

	// int number;
	// int counter = 0;
	
	// for (int i = 0; i < 10; i++)
	// {
	// 	cin >> number;
	// 	if (number % 2 == 0)
	// 		continue; // ако числото е четно, не инкрементираме

	// 	counter++;
	// }
	
	// cout << "Odd numbers are: " << counter << endl;

    // 5) n number of fibonacci series
    int n;
    cin >> n;

    int firstNumber = 1, secondNumber = 1;
    int result = 0;

    // 1,1,2,3,5,8,13,21,34

    for (int i = 1; i <= n; i++) {
        firstNumber = secondNumber;
        secondNumber = result;
        result = firstNumber + secondNumber;
    }
}