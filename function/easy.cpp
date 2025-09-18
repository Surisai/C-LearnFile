
//Declaring Function
 /// return_type function_name(paraeter_list(scope type to run in funtion))
 // int NameFumntion(int year) --> return year
 //bool YearCal(int year) -- > return bool true / False
#include <iostream>
using namespace std;

bool IsLeap(int year){
    return (year % 4 == 0 || year % 400 == 0 && year% 100 != 0);
}

int main(){
    
    for(int yr = 1996; yr < 2025; yr ++){
        cout << yr << " ---> " << IsLeap(yr) <<endl;
    }
    return 0;
}