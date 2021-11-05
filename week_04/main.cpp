#include <iostream>

using namespace std;

int main() {
    // bool hasExcellentGrade = true;
    // int stipendiq;

    // hasExcellentGrade ? stipendiq = 100 : stipendiq = 0;

    // cout << stipendiq << endl;

    // int n;
    // cin >> n;

    // for (int i = 0; i < n; i++) {
    //     cout << i << " ";
    // }
    // cout << endl;

    //////////////////////////////

    // int i = 0;
    
    // while (i < n) {
    //     cout << i << " ";
    //     i++;
    // }

    /* 
        цикли с:
            предусловие -> for, while
            следусловие -> do..while
    */

    //////////////////////////////

    // cout << endl;
    // i = 0;
    // do {
    //     cout << i << " ";
    //     i++;
    // } while (i < n);

    //////////////////////////////
    // вложени цикли

    int N;
    cout << "Enter N: "; 
    cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 1; j <= N; j++) {
            if (i < j) {
                cout << "+";
            } else {
                cout << "-";
            }
        }
        cout << endl;
    }
}