#include <iostream>

using namespace std;

int main() {
    // 1)
    int month;
    cout << "Enter a month: ";
    cin >> month;
    switch(month){
        case 1: cout << "January";
        break;
        case 2: cout << "February";
        break;
        case 3: cout << "March";
        break;
        case 4: cout << "April";
        break;
        case 5: cout << "May";
        break;
        case 6: cout << "June";
        break;
        case 7: cout << "July";
        break;
        case 8: cout << "August";
        break;
        case 9: cout << "September";
        break;
        case 10:cout << "October";
        break;
        case 11:cout << "November";
        break;
        case 12:cout << "December";
        break;
        default: cout << "Invalid input!";
    }
    cout << ' ';
     switch(month){
        case 1:
        case 2:
        case 12: cout << "Winter";
        break;
        case 3:
        case 4:
        case 5: cout << "Spring";
        break;
        case 6:
        case 7:
        case 8: cout << "Summer";
        break;
        case 9:
        case 10:
        case 11:cout << "Fall";
        break;
        default: cout << "Invalid input!";
    }

    // 2)
    double a,b,c,d,x1,x2;
    cout << "Enter values for a,b & c: ";
    cin >> a >> b >> c;
    d = b * b - 4 * a * c;
    if ( a == 0 )
    {
        cout << "Not a quadratic equation!"; 
    } else if ( d < 0 ){
        cout << "No roots to this equation!";
    } else if ( d == 0 ){
        x1 = -b / (2 * a);
        cout << "x1 = x2 = "<< x1;
    } else {
        x1 = ( -b + sqrt(d) ) / (2 * a);
        x2 = ( -b - sqrt(d) ) / (2 * a);
        cout << "x1 = " << x1 << '\t' << "x2 = " << x2; 
    }

    // 3)
    int a,n,sum = 1;
    cout << "Enter a number and its power: ";
    cin >> a >> n;
    cout << endl;
    for(int i = 1;i <= n;i++){
        sum *=a;
    }
    cout << "Result: " << sum <<endl;

        // 5) n number of fibonacci series
    // int n;
    // cin >> n;

    // int firstNumber = 1, secondNumber = 1;
    // int result = 0;

    // // 1,1,2,3,5,8,13,21,34

    // for (int i = 1; i <= n; i++) {
    //     firstNumber = secondNumber;
    //     secondNumber = result;
    //     result = firstNumber + secondNumber;
    // }

    // cout << "The number from the series is: " << result;

    // int a, n, product = 1;

    // cin >> a >> n;
    // for (int i = 1; i<=n; i++) {
    //     product *= a;
    // }

    // cout << "Result: " << product << endl;
    
    int n;
    cout << "Enter N:"; 
    cin >> n;

    int numFromSeries = 1;
    for (int i = 1; i <= n; i++) {
        if (i == n) {
            cout << numFromSeries << endl;
        } else {
            cout << numFromSeries << " + ";
        }

        numFromSeries = (numFromSeries * 10) + 1;
    }
}