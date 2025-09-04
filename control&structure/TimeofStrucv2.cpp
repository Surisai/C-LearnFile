#include <iostream>
using namespace std;

struct TIME {
    int h;
    int m;
};

int main() {
    TIME time;
    int dur;

    // Ask for hours
    time.h = -1;
    while (time.h < 0 || time.h > 23) {
        cout << "Enter hour (0-23): ";
        cin >> time.h;
        if (time.h < 0 || time.h > 23) {
            cout << "Invalid hour: " << time.h << endl;
        }
    }

    // Ask for minutes
    time.m = -1;
    while (time.m < 0 || time.m > 59) {
        cout << "Enter minute (0-59): ";
        cin >> time.m;
        if (time.m < 0 || time.m > 59) {
            cout << "Invalid minute: " << time.m << endl;
        }
    }

    // Ask for duration
    dur = -1;
    while (dur < 0) {
        cout << "Enter duration (minutes): ";
        cin >> dur;
        if (dur < 0) {
            cout << "Invalid duration: " << dur << endl;
        }
    }


    // Add duration
    int hh = dur / 60;
    int mm = dur % 60;
    time.m += mm;
    time.h += hh + (time.m / 60);
    time.m %= 60;
    time.h %= 24;

    // Print result HH:MM with leading zeros
    if (time.h < 10) cout << 0;
    cout << time.h << ":";
    if (time.m < 10) cout << 0;
    cout << time.m << endl;

    return 0;
}
