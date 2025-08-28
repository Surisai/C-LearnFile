
#include <iostream>
using namespace std;
int main() {
    int year;
    cout << "Enter year : ";
    cin >> year;
     //year if 
     int a,b,c,d,e,day;
     string month;
     
     a = year % 19;
     b = year % 4;
     c = year % 7;
     d = (a*19 + 24 )% 30;
     e = (2*b + 4*c +6* d +5) % 7;
     
     if(d + e < 10)
     {
        month = "March";
        day = d + e + 22;
     }
     else {
        month = "April";
        day = d + e - 9;
     }
     cout << "Easter in "<< year << " fals on "<<month << " "<<day <<endl;
   
    
    
    
    //
    return 0;
}