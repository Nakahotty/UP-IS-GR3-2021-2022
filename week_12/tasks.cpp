#include <iostream>

using namespace std;

// 0)
int sumOfDigits(int num) {
    if (num < 10) {
        return num;
    }

    return (num % 10) + sumOfDigits(num / 10);
}

// 1)
int recStrlen(const char* str) {
    if (*str == '\0') {
        return 0;
    }

    return 1 + recStrlen(str + 1);
}

// 2)
int reverse(int num, int acc) {
    if (num == 0) {
        return acc;
    }

    return reverse(num / 10, (acc * 10) + (num % 10));
}

int main() {
    cout << sumOfDigits(154) << endl;
    cout << recStrlen("Happy new year") << endl;

    cout << reverse(1123, 0) << endl;
}