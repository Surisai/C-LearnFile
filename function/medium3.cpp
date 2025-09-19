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
    //initiallize counters
    int total1 = 0;
    int total2 = 0;
//calculate total days for d1
    // for(int y = 0 ; y < d1.year -1; y++ ){
    //     if (isLeap(y)){
    //         total1 += 366;
    //     }else {
    //         total1 += 365;
    //     }
    // }
    // total1 += dayOfYear(d1);
    for(int y = 1; y < d1.year; y++){
        total1 += isLeap(y) ? 366: 365;
    }
    total1 += dayOfYear(d1);

//calculate total for days for d2
    // for(int y = 0; y < d2.year-1 ; y++){
    //      if (isLeap(y)){
    //         total2 += 366;
    //     }else {
    //         total2 += 365;
    //     }
    // }
    // total2 += dayOfYear(d2);
    for(int y = 1 ; y < d2.year; y++){
        total2 += isLeap(y) ? 366: 365;
    }
    total2 += dayOfYear(d2);

    //difference
    int diff = total2-total1;

    if(diff < 0){
        return -1;
    }else{
        return diff;
    }

}

int main(){

    Date d;
    cout << "Enter year , month, day: ";
    cin >> d.year >> d.month >> d.day;
    cout << dayOfYear(d) << endl;

    return 0;
}