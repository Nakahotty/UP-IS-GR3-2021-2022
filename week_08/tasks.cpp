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

// NxM, N == M -> size
const int MAX_COLS = 10;

// fillMatrix(int matrix[][], int rows, cols)
// ... for(; i < rows; i++)
// ...     for(; j < cols; j++)

void fillMatrix(int matrix[][MAX_COLS], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << "arr[" << i << "][" << j << "] = ";
            cin >> matrix[i][j];
        }
    }
}

void printMatrix(int matrix[][MAX_COLS], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << matrix[i][j] << " ";
        }
         
        cout << endl;
    }
}

void fillMatrix(int matrix[][MAX_COLS], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "arr[" << i << "][" << j << "] = ";
            cin >> matrix[i][j];
        }
    }
}

void printMatrix(int matrix[][MAX_COLS], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
         
        cout << endl;
    }
}

// 2) Транспониране
void transposeMatrix(int matrix[][MAX_COLS], int tr[][MAX_COLS], int rows, int cols) {
    // [i][j] -> [j][i]
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            tr[j][i] = matrix[i][j];
        }
    }
}

// 3) Симетрична
bool isSymetric(int matrix[][MAX_COLS], int N) {
    int trMatrix[N][MAX_COLS]; // capacity!!!
    
    transposeMatrix(matrix, trMatrix, N, N);
    cout << " --------- " << endl;
    printMatrix(trMatrix, N, N);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (matrix[i][j] != trMatrix[i][j])
                return false;
        }
    }
    
    return true;
}

int main() {
    int matrix[MAX_COLS][MAX_COLS];

    // int size;
    // cout << "Enter size: "; cin >> size;

    // fillMatrix(matrix, size);
    // printMatrix(matrix, size);

    int rows, cols;
    cout << "Enter rows: "; 
    cin >> rows;
    cout << "Enter cols: "; 
    cin >> cols;

    fillMatrix(matrix, rows, cols);
    printMatrix(matrix, rows, cols);

    // // 2)
    // int trMatrix[MAX_COLS][MAX_COLS];
    // transposeMatrix(matrix, trMatrix, rows, cols);
    // cout << "Transposed: " << endl;
    // printMatrix(trMatrix, cols, rows);

    // 3)
    cout << isSymetric(matrix, rows) << endl;

}