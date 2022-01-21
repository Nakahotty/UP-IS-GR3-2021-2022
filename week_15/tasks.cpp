#include <iostream>

using namespace std;

int length(char* str) {
    int result = 0;
    while (*str != '\0') {
        result++;
        str++;
    }

    return result;
}

char* transform(char* str1, char* str2, int k) {
    char* result = new char[length(str1) + 1];

    int i = 0;
    for (; i != length(str1) - k; i++) {
        result[i] = str1[i];
    }

    for (int j = 0; j < k; j++, i++) {
        result[i] = str2[j];
    }

    return result;
}

char *newString(char *firstSting, char *secondString, int k)
{
    int sizeOfFirstaString = length(firstSting)-k;
    char *newStringg = new char[length(firstSting)+1];
    for (int i = 0; i < sizeOfFirstaString; i++)
    {
        newStringg[i] = firstSting[i];
    }

    for (int i = 0; i < k; i++)
    {
        newStringg[sizeOfFirstaString + i] = secondString[i];
    }
    
    newStringg[sizeOfFirstaString + k] = '\0';
    return newStringg;
}

// ----------------
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverse(int* arr, int size) {
    // for (int i = 0, j = size - 1; i < size / 2; i++, j--) {
    //     swap(arr[i], arr[j]);
    // }

    int* start = arr;
    int* end = arr + size - 1;

    while (start < end) {
        swap(*start, *end);
        start++;
        end--;
    }
}

void print(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
}

void fillArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

// -------------------------
char* strcat(char *str1, char *str2)
{
    char *conc = new char[length(str1) + length(str2) + 1];

    int i;
    for(i = 0; str1[i] != '\0'; i++)
    {
        conc[i] = str1[i];
    }
    for(int j = 0; str2[j] != '\0'; j++ , i++)
    {
        conc[i] = str2[j];
    }
    i++;
    conc[i] = '\0';

    return conc;
}

// ---------------------

struct Book {
    char title[64];
    int year;
    int price;
    char author[64];

    void create() {
        cout << "Enter title: ";
        cin.getline(title, 64);
        cout << "Enter year: "; cin >> year;
        cout << "Enter price: "; cin >> price;
        cout << "Enter author: ";
        cin.ignore();
        cin.getline(author, 64);
    }

    int getYear() {
        return year;
    }

    int getPrice() {
        return price;
    }

    bool isNew() {
        return year > 2010;
    }

    void swapPrice(Book& other) {
        int temp = price;
        price = other.price;
        other.price = temp;
    }

    void print() {
        cout << "Title: " << title << endl;
        cout << "Year: " << year << endl;
        cout << "Price: " << price << endl;
        cout << "Author: " << author << endl;
    }
};

void sortBooks(Book books[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (books[j].getYear() > books[j+1].getYear()) {
                int temp = books[j].year;
                books[j].year = books[j+1].year;
                books[j+1].year = temp;
            }
        }
    }
}

void sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

const int CAPACITY = 50;
int main() {
    // char str1[CAPACITY];
    // char str2[CAPACITY];
    // cout << "Fill string 1: ";
    // cin.getline(str1,CAPACITY);
    // cout << "Fill string 2: ";
    // cin.getline(str2,CAPACITY);
    // int k;
    // cout << "k = ";
    // cin >> k;
    // while(k < 1)
    // {
    //     cout << "k must be a positive intiger!"
    //          << "\nEnter new value for k: ";
    //     cin >> k;
    // }

    // char *result = newString(str1,str2,k);
    // cout << result << endl;

    // -----------------------------------

    // int* arr = new int[CAPACITY];
    // fillArray(arr, 6);

    // cout << "Original array: ";
    // print(arr, 6);
    // cout << "Reversed array: ";
    // reverse(arr, 6);
    // print(arr, 6);
    
    // -----------------------------------
    Book b1, b2, b3; 
    b1.create();
    b2.create();
    b3.create();

    Book books[] = {b1, b2, b3};
    sortBooks(books, 3);

    // int years[] = {2020, 2019, 1995};
    // sort(years, 3);

    // print(years, 3);
}