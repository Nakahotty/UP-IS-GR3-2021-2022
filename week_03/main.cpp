#include <iostream>

using namespace std;

/*
!(X && Y) е еквивалентно на !X || !Y
!(X || Y) е еквивалентно на !X && !Y
*/

const double MULTIPLIER = 0.6271;

int main() {
    bool hasPassedAlgebra = false, hasPassedUP = true;
    cout << MULTIPLIER << endl;

    bool hasPassedSemester = hasPassedAlgebra && hasPassedUP;     // bulev izraz
    cout << hasPassedSemester << endl;

    if (hasPassedSemester) {
        // тук влизаме само ако булевия израз връща TRUE
        cout << "You are invited to a party!!!" << endl;
    } else {
        cout << "There is no party :(" << endl;
    }

    int number = 20;

    // if a number is divided by 5 AND by 3
    if (number % 5 == 0) {
        cout << "Divided by 5" << endl;

        if (number % 3 == 0) {
            cout << "Divided by 3" << endl;
        } else {
            cout << "NOT Divided by 3" << endl;
        }
    } else {
        cout << "NOT divided by 5" << endl;
    }

    int num = 4;

    if (num % 2 == 0) {
        cout << "Divided by 2" << endl;
    } else if (num % 3 == 0) {
        cout << "Divided by 3" << endl;
    } else {
        cout << "NOT divided by either 2 or 3" << endl;
    }


    // 1)
    if (true) {

    }

    // 2)
    if (true) {

    } else {

    }

    // 3)
    if (false) {
        
    } else if (true) {

    } else {

    }

    // {  SCOPE на променливите
        
    //     {
    //         int num = 5;
    //         cout << MULTIPLIER << endl;
    //         cout << num << endl;   
    //     }

    // }

    // cout << num << endl;
}