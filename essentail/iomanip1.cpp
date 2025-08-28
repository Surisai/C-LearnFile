//sqrt() function for square root float=  v*v
//with header file  cmath 
// #include <iostream>
// #include <cmath>


// using namespace std;
//  int main(void){
//     float value , sq;
//     cout << "Enter the number and finding its square root : ";
//     cin >> value;
//     if (value >= 0.0 ){
//         sq = sqrt(value);
//         cout << "You have given : " << value << endl;
//         cout << "The square root is "<< sq << endl;

//     }

//     return 0 ;
//  }

// Scenario
// All operations on float numbers should be made while keeping one thing in mind: they are not entirely accurate.

// If we're comparing two float numbers, we must use an epsilon comparison. Write code to check if two given numbers differ by only a small value (i.e. 0.000001).

// Ask for two integer numbers from the user. Divide 1 by each of them (1 by the first number and 1 by the second number) and compare the results of this operation. Print the information to the user. Remember to convert to floats before dividing.

// Put these values into your code:

#include <iostream>
#include <iomanip>
#include <string>



int main(void){
    float v1 = 2.3;
    float v2 = 2.3;
    float v3 = 2.123456;
    float v4 = 2.123456;
    float v5 = 2.123456;

   std::cout << std::setprecision(2) << v1<< std::endl;
   std::cout << std :: setprecision(2) << std:: fixed <<v2 << std::endl;
   std::cout << std::setprecision(6) << v3 << std:: endl;
   std::cout <<std::setprecision(2)<<v4 <<std::endl;
   std:: cout<< std:: setprecision(0) << v5 <<std::endl;


    // cout << "Enter the number  : ";
    // cin >> val1 ;
    // cout << endl;
    // cout << "Enter comparing number : ";
    // cin >> val2;
    // if(val1 <= 0.0){
    //    cout << " Result are equal ( by " << val1 << "epsilon " << endl;
    // }else (val1 <)
    // cout << " Result are not equal ( by "<< val1 << "epsilon"<< endl;
    // {

    // }

    
    return 0 ;

}

