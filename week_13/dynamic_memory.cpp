#include <iostream>

using namespace std;

void print(int* arr, int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

// 2)
int* halfSize(int* arr, int size) {
    int newSize = size / 2;
    int* newArr = new int[newSize];

    for (int i = 0; i < newSize; i++) {
        newArr[i] = arr[i];
    }

    return newArr;
}

// 3)
void fillGrades() {
    int teachersSize;
    cin >> teachersSize;

    // stack -> double marks[teachersSize][teachersSize]; 
    double** marks = new double*[teachersSize];

    int marksSize;
    cin >> marksSize; // for testing purposes first teacher declares max grades size
    
    for (int i = 0; i < teachersSize; i++) {
        // make space for i'th teacher to fill grades
        marks[i] = new double[marksSize]; 

        for (int j = 0; j < marksSize; j++) {
            cin >> marks[i][j]; // fill grades
        }
    }

    for (int i = 0; i < teachersSize; i++) {
        for (int j = 0; j < marksSize; j++) {
            cout << marks[i][j] << " ";
        }

        cout << endl;
    }
}

int main() {
    int size = 4;
    int arr[size] = {1,2,3,4};

    int* newArr = halfSize(arr, size);
    print(newArr, size / 2);

    delete[] newArr;

    fillGrades();
}