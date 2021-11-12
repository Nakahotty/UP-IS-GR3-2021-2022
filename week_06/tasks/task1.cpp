#include <iostream>
#include <cmath>

using namespace std;

// refactor -> only with one time
bool isValidTime(int time1, int time2) {
    int time1Minutes = time1 % 100;
    int time1Hours = time1 / 100;

    int time2Minutes = time2 % 100;
    int time2Hours = time2 / 100;

    bool hasValidTime1 =  time1Minutes >= 0 && 
                          time1Minutes <= 59 &&
                          time1Hours >= 0 && 
                          time1Hours <= 23;

    
    bool hasValidTime2 =  time2Minutes >= 0 && 
                          time2Minutes <= 59 &&
                          time2Hours >= 0 && 
                          time2Hours <= 23;

    return hasValidTime1 && hasValidTime2;
}

// 0125 0355  

void differenceBetweenTimes(int time1, int time2) {
    int time1Minutes = time1 % 100;
    int time1Hours = time1 / 100;

    int time2Minutes = time2 % 100;
    int time2Hours = time2 / 100;



    if (isValidTime(time1, time2)) {
        time1Minutes += time1Hours * 60;
        time2Minutes += time2Hours * 60;

        if (time2Minutes < time1Minutes) {
            time2Minutes += 24 * 60;
        }

        int difference = time2Minutes - time1Minutes;

        int differenceMinutes = difference % 60;
        int differenceHours = difference / 60;

        // 09:05   // 0905
        if (differenceHours < 10) {
            cout << 0;
        }
        cout << differenceHours;

        if (differenceMinutes < 10) {
            cout << 0;
        }
        cout << differenceMinutes;
    }
}

int main() {
    int time1, time2;
    cout << "Enter time 1: ";
    cin >> time1;

    cout << "Enter time 2: ";
    cin >> time2;

    differenceBetweenTimes(time1, time2);
}