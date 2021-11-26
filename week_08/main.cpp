#include <iostream>

using namespace std;

const int ROWS = 2;
const int COLS = 2;

const int SIZE = 3;
void fillMatrix (int arr[][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << "arr[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
    }
}

void printMatrix (int arr[][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    // int arr [<редове>][<колони>]
    int arr[3][5];

    double dArr[10][10]; 
    char str[4][6]; 

    // 1) инициализация
    // int arr[2][2]; // два реда и две колони, общо 2 * 2 = 4 елемента
    // arr[0][0] = 5;
    // arr[0][1] = -3;                 //arr изглежда така: 5 -3
    // arr[1][0] = 12;                 //                   12 6
    // arr[1][1] = 6;
    

    // 2)
    // int[] arr1 = {1,2};
    // int constArr[ROWS][COLS] = {{1,2},
    //                             {3,4}}

    // 3) можем да пропускаме броя РЕДОВЕ, но колоните са ЗАДЪЛЖИТЕЛНИ!
    // int array[][5] =
    // {
    //     { 1, 2, 3, 4, 5 },
    //     { 6, 7, 8, 9, 10 },
    //     { 11, 12, 13, 14, 15 }
    // };

    // int size;
    // cin >> size;

    int matrix[SIZE][SIZE];
    fillMatrix(matrix);
    printMatrix(matrix);
}