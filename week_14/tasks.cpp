#include <iostream>
#include <cmath>

using namespace std;

struct Point {
    double x,y;

    double distance(Point other) {
        // (x2-x1)^2 + (y2-y1)^2 (под корен)
        double differenceX = x - other.x;
        double differenceY = y - other.y;
        return sqrt(pow(differenceX, 2) + pow(differenceY, 2));
    }

    void print() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

struct Line {
    Point p1, p2;

    double length() {
        return p1.distance(p2);
    }

    bool isEqual(Line other) {
        return length() == other.length();
    }

    void print() {
        // p1.print();
        // cout << ", "; p2.print();
        // cout << "- " << length();

        cout << "P1(" << p1.x << ", " << p1.y << ")"
           << ", P2(" << p2.x << ", " << p2.y << ") - " << length() << endl;
    }
};

struct Triangle {
    Line a,b,c;

    bool isValid() {
        return (a.length() + b.length() > c.length()) &&
               (b.length() + c.length() > a.length()) && 
               (a.length() + c.length() > b.length());
    }

    double paramter() {
        return a.length() + b.length() + c.length();
    }

    double area() {
        // koren(p(p-a)(p-b)(p-c) -> p - полупериметър)
        double p = paramter() / 2;

        return sqrt(p*(p-a.length())*(p-b.length())*(p-c.length()));
    }

    void print() {
        cout << "Triangle info: " << endl;
        cout << "a: " << a.length() << "cm." << endl;
        cout << "b: " << b.length() << "cm." << endl;
        cout << "c: " << c.length() << "cm." << endl;
        cout << "Valid: " << isValid() << endl;
        cout << "Parameter: " << paramter() << endl;
        cout << "Area: " << area() << endl;
    }
};

int main() {
    Point p1, p2, p3;
    p1 = {0, 0};
    p2 = {3, 0};
    p3 = {0, 4};
    // p1.x = 0; p1.y = 0;
    // p2.x = 3; p2.y = 0;
    // p3.x = 0; p3.y = 4;

    Line a,b,c;
    a = {p1, p2};
    b = {p2, p3};
    c = {p3, p1};

    Triangle t = {a, b, c};
    t.print();
}