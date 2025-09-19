#include <iostream>

using namespace std;

struct Date{
    int year;
    int month;
    int day;

};

bool isLeap(int year){
    return (year % 400 == 0) ||(year % 4 == 0 && year % 100 != 0);
}

int monthLength(int year, int month){
    if (month < 1 || month > 12) {
        return 0;
    }
    /// 2. February special case
    if (month == 2) {
        if (isLeap(year)) {
            return 29;
        } else {
            return 28;
        }
    }

    // 3. Months with 31 days
    if (month == 1 || month == 3 || month == 5 ||
        month == 7 || month == 8 || month == 10 || month == 12) {
        return 31;
    } 
    // 4. Remaining months must have 30 days
    else {
        return 30;
    }
}

int dayOfYear(Date date){
/// day
    int totalDays = 0;

    for( int m = 1; m < date.month ; m++){
       totalDays += monthLength(date.year,m);

    }
    totalDays += date.day;

    return totalDays;
   
}

int daysBetween(Date d1, Date d2){
    
}

int main(){

    Date d;
    cout << "Enter year , month, day: ";
    cin >> d.year >> d.month >> d.day;
    cout << dayOfYear(d) << endl;

    return 0;
}