#include <iostream>

using namespace std;

/* 
6 -> [2] 3
квадрат на 2 -> 4
28 -> 4
*/

int main() {
    int firstNum, secondNum;
    bool answer = false;
    cin >> firstNum >> secondNum;

    for (int i = 2; i < firstNum; i++) {
        if (firstNum % i == 0) {
            if (secondNum % (i*i) == 0) {
                answer = true;
                break;
            }
        }
    }

    if (answer) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}