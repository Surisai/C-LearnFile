// Objectives
// Familiarize the student with:

// obtaining input from user;
// concatenating given data.
// Scenario
// Write a simple code to input an IP number. Check the given data with a few simple conditions (i.e. if the number is in the range from 1 to 255) and concatenate it into an IP number.

// You must get four numbers from the user, connect them with dots and print them.

// Put these values into your code:
#include <iostream>
#include <iomanip>

int main() {
    int num1;
    int num2;
    int num3;
    int num4;

    std::cout << "Enter output :";
    std::cin >> num1;

    std::cout << "Enter output :";
    std::cin >> num2;
    
    std::cout << "Enter output :";
    std::cin >> num3;
    
    std::cout << "Enter output :";
    std::cin >> num4;
   
    
    std::cout <<num1 << "."<< num2 <<"."<< num3<<"."<<num4<<std::endl;
    return 0 ;
        
}
