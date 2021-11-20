#include <iostream>

using namespace std;

// <тип> <име_на_масив>[<размер_на_масива>];

// [100,50,33,10]
//  0 ,1, 2, 3   -> index

// брой елементи = n
// максимален индекс = n-1

void fillArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
}

void printArray(char arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i];
    }

    cout << endl;
}

// 
int arrLength(char chArr[]) {
  size_t i;
  
  for (i = 0; chArr[i]; i++);
  
  return i;
}

const int SIZE = 100;

// при обхождане на символен низ 
// винаги while (charArr[i] != '/0')

int main() {
    // int n;
    // cout << "Enter N: ";
    // cin >> n;
    
    // int arr[n];
    // fillArray(arr, n);
    // printArray(arr, n);

    // char word[] = {'f', 'm', 'i'};
    // printArray(word, 3);

    // char sentence[SIZE];
    // cin.getline(sentence, SIZE);
    // printArray(sentence, SIZE);


    // обратно въвеждане
    // int arr2[10];
    // arr2[9] = 5;
    // arr2[8] = 1;
    // cout << arr2[9];
    // cout << arr2[8];

    // sizeof(arr) / sizeof(<arr_type>) = array length

    // char word[] = {'f', 'm', 'i'};
    // int days[] = {1,2,3,4,5};
    // cout << arrLength(word) << endl;
    // cout << sizeof(word) << endl;
    // cout << sizeof(days) / sizeof(int) << endl;

    int size;
    cout << "Enter char array size: ";
    // добавяме място за ТЕРМИНИРАЩАТА НУЛА!
    cin >> size; size++;
    // за сега запомнете, че това ви трябва за да успеете да въведете изречението
    cin.get();


    char sentence[size];
    cin.getline(sentence, size);
    printArray(sentence, size);
    cout << "Size of sentence: " << arrLength(sentence) << endl;
}