#include <iostream>
#include <iomanip>
using namespace std;

struct TIME {
    int h;
    int m;
};

int main() {
    TIME start, end;

    // Input start time
    cout << "Enter start time (hour minute): ";
    cin >> start.h;
    cout << "Enter start time(minute)";
    cin >> start.m;

    // Input end time
    cout << "Enter end time (hour minute): ";
    cin >> end.h;
    cout <<"Enter end time (minutes) : ";
    cin >> end.m;

    // Validate ranges
    if (start.h < 0 || start.h > 23 || start.m < 0 || start.m > 59 ||
        end.h < 0   || end.h > 23   || end.m < 0   || end.m > 59) {
        cout << "Invalid time entered.\n";
        return 0;
    }

    // Convert to minutes since midnight
    int startMinutes = start.h * 60 + start.m;
    int endMinutes   = end.h * 60 + end.m;

    // Check order
    if (endMinutes <= startMinutes) {
        cout << "End time must be later than start time.\n";
        return 0;
    }

    // Compute difference
    int diff = endMinutes - startMinutes;
    int dh = diff / 60;
    int dm = diff % 60;

    // Print result with leading zeros
    cout << setfill('0') << setw(2) << dh << ":"
         << setw(2) << dm << endl;

    return 0;
}
