//Lab Near zero Float number

// Scenario
// All operations on float numbers should be made while keeping one thing in mind: they are not entirely accurate.

// If we're comparing two float numbers, we must use an epsilon comparison. Write code to check if two given numbers differ by only a small value (i.e. 0.000001).

// Ask for two integer numbers from the user. Divide 1 by each of them (1 by the first number and 1 by the second number) and compare the results of this operation. Print the information to the user. Remember to convert to floats before dividing.

// Put these values into your code:


#include <iostream>
using namespace std;

int main() {
    int val1,val2;
    cout << "Enter the first number : ";
    cin >> val1;
    cout << " Entern the second number : ";
    cin >> val2;
    //you don't need to worry about the division by zero at this moment
    if( val1 == 0  ) return -1;
    float result1 = 1 / static_cast<float>(val1);
     if (val2 == 0 ) return -1;

     float result2 = 1 / static_cast<float>(val2);
     float diff = result1 - result2;
     float diffAbs = diff < 0 ? -diff : diff;
     const float eps_diff = 0.00001;

     if(diffAbs <= eps_diff){
        std::cout << std::endl << "Results are equal (by 0.000001 epsilon)";

     }else
        std::cout << std::endl << "Results are not equal (by 0.000001 epsilon)";


     return 0 ;
}

