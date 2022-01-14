#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

struct Book {
    char title[50], author[40], publisher[32];
    int yearOfPublish;
    double price;
};

struct Student {
    char name[32], address[50];
    int facNumber;
    int grades[10];
};

int main() {
    // instance (static)
    Book b1;          
    b1.price = 30;
    b1.yearOfPublish = 2000;
    cout << b1.price << endl;
    cout << b1.yearOfPublish << endl;

    // set char array field
    strcpy(b1.author, "Harry Potter");
    cout << b1.author << endl;

    // instance (dynamic)
    Book* b2 = new Book();
    b2->price = 50;
    cout << b2->price << endl;
    delete b2;
}