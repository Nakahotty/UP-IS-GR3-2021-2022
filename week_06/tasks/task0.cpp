#include <iostream>

using namespace std;

bool hasOneInNumber(int num) {
    while (num != 0) {
        if (num % 10 == 1) {
            return true;
        }

        num /= 10;
    }

    return false;
}

int main() {
    int num;
    cout << "Enter number:";
    cin >> num;

    cout << "Does the number " << num << " have one?" << endl;
    cout << boolalpha << hasOneInNumber(num) << endl;
}

// 1)