#include <iostream>

using namespace std;

bool isLeap(int year) { 
    return (year % 4 == 0) ||( year % 400 == 0 && year %100 != 0 );
	// The code you've inserted already
}

int monthLength(int year, int month) {
    // switch (month) {
    //     case 1:  // January
    //     case 3:  // March
    //     case 5:  // May
    //     case 7:  // July
    //     case 8:  // August
    //     case 10: // October
    //     case 12: // December
    //         return 31;

    //     case 4:  // April
    //     case 6:  // June
    //     case 9:  // September
    //     case 11: // November
    //         return 30;

    //     case 2:  // February
    //         if (isLeap(year)) {
    //             return 29;
    //         } else {
    //             return 28;
    //         }

    //     default: // invalid month
    //         return 0;
    // }
	//VErsion 2
	///check valid month

	if(month < 1 || month > 12){
		return 0 ;
	}
	///Day in each month (non-leap year)
	int daysInMonth[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

	//special case for February
	if(month == 2 && isLeap(year)){
		return 29;
	}

	//Return from the array
	return daysInMonth[month -1];
}
// //Version 3

// int monthLength(int year, int month) {
//     // 1. Check for invalid month
//     if (month < 1 || month > 12) {
//         return 0;
//     }

//     // 2. February special case
//     if (month == 2) {
//         if (isLeap(year)) {
//             return 29;
//         } else {
//             return 28;
//         }
//     }

//     // 3. Months with 31 days
//     if (month == 1 || month == 3 || month == 5 ||
//         month == 7 || month == 8 || month == 10 || month == 12) {
//         return 31;
//     } 
//     // 4. Remaining months must have 30 days
//     else {
//         return 30;
//     }
// }



int main(void) {

	for(int yr = 2000; yr < 2002; yr++) {
		for(int mo = 1; mo <= 12; mo++)
			cout << monthLength(yr,mo) << " ";
		cout << endl;
	}
	return 0;
}