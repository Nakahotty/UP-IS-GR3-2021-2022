#include <iostream>

using namespace std;

int toBinary(int number) {
    if (number == 0 || number == 1) {
        return number;
    } 

    return (number % 2) + 10 * toBinary(number / 2);
}

void evaluate(const char *string, int number, int smallLetter, int bigLetter)
{
    if (*string == 0)
    {
        cout << "number " << number << endl;
        cout << "small letter " << smallLetter << endl;
        cout << "big letter " << bigLetter << endl;
        return;
    }

    if (*string >= '0' && *string <= '9')
        return evaluate(string + 1, number+1, smallLetter, bigLetter);
    if (*string >= 'a' && *string <= 'z')
        return evaluate(string + 1, number, smallLetter+1, bigLetter);
    if (*string >= 'A' && *string <= 'Z') 
        return evaluate(string+1, number, smallLetter, bigLetter+1);

    return evaluate(string+1, number, smallLetter, bigLetter);
}

void evaluate(const char* arr) {
    int small = 0;
    int big = 0;
    int n = 0;

    while (*arr != '\0') {
        if (*arr>='a' && *arr<='z')
        {
            ++small;
        }
        else if (*arr >= 'A' && *arr <= 'Z' )
        {
            ++big;
        }
        else if (*arr >= '0' && *arr <= '9' )
        {
            ++n;
        }
    }

    cout << "small letters: " << small << endl;
    cout << "big letters: " << big << endl;
    cout << "digits: " << n << endl;
}

void swapcase(char* str) {
    if (*str == '\0') {
        return;
    }

    if (*str >= 'a' && *str <= 'z') {
        *str -= 32;
        return swapcase(str + 1);
    } 

    if (*str >= 'A' && *str <= 'Z') {
        *str += 32;
        return swapcase(str + 1);
    }

    return swapcase(str + 1);
}

int main() {
    cout << toBinary(8) << endl;
    evaluate("3 Doors Down", 0, 0, 0);

    char str[] = "Yellow Submarine";
    swapcase(str);
    cout << str << endl;
}