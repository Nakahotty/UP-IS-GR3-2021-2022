#include <iostream>

using namespace std;

int main() {
    // factoriel
    // int n;
    // std::cin >> n;
    // int result = 1;
    // for (int i = 1; i <= n; i++) {
    //     result *= i;
    // }
    // std::cout << result << std::endl;

    // // sum until 0
    // int num, sum = 0;
    // while (true) {
    //     std::cin >> num;   
    //     sum+=num;

    //     if (num == 0) {
    //         std::cout << "Sum is: " << sum << std::endl;
    //         break;
    //     }  
    // }

    // sum of digits
    // int num, sum = 0;
    // cin >> num;

    // int digit = 0;
    // while (num > 0) {
    //     digit = num % 10;
    //     sum += digit;
    //     num /= 10;
    // }

    // std::cout << "Sum of digits: " << sum << std::endl;

    // sample number check
    // int num;
    // cin >> num;
    // bool flag = true;

    // for (int i = 2; i < num/2; i++) {
    //     if (num % i == 0) 
    //         flag = false;
    // }

    // if (flag) {
    //     std::cout << num << " is prime" << std::endl;
    // } else {
    //     std::cout << num << " is NOT prime" << std::endl;
    // }

    // only consonants in word -> FOR ARRAY LECTURE

    // protons and electrons
    int n;
    cin >> n;
    int numOfPluses = n;
    int numOfMinuses = 0;
    for (int i = 0; i < n; i++) {
        for (int k = 0; k < numOfMinuses; k++) {
            cout << "-";
        }
        numOfMinuses++;

        for (int j = 0; j < numOfPluses; j++) {
            cout << "+";
        }
        numOfPluses--;

        cout << endl;
    }

    // n number of fibonaci series
    // int n;
    // cin >> n;

    // int first = 1, second = 2;
    // int sum = 0;
    // for (int i = 2; i < n; i++) {
    //     sum = first + second;

    //     first = second;
    //     second = sum;
    // }

    // cout << n << " number of the series is " << sum << endl;
}