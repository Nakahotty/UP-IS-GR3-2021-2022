#include <iostream>

using namespace std;

// capacity -> 1000;
// size -> 5;

// максимален капацитет (основна полза при ДИНАМИЧНИ масиви!)
// const int MAX_N = 1000;
// int numbers[MAX_N];

void fillArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }
}

bool isInteresting(int number) {
    while (number != 0) {
        // дясната цифра трябва да е по-голяма от лявата
        if ((number % 10) < (number / 10) % 10) {
            return false;
        }

        number /= 10;
    }

    return true;
}

void interestingNumbers() {
    int size;
    cin >> size;

    // след този ред, numbers 
    // няма да си промени size-a НИКОГА! (n)
    int numbers[size]; 

    fillArray(numbers, size);

    // обхождане на ЧИСЛАТА
    for (int i = 0; i < size; i++) {
        int number = numbers[i]; // текущо число на работа

        if (isInteresting(number)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

int main() {
    interestingNumbers();
}