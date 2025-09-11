#include <iostream>

using namespace std;

int main(void) {
    long long c0;
    cout << " Enter a nataural number : ";
    cin >> c0;
    if (c0 <= 0){
        cout << "Number must be positive and non-zero. " <<endl;
        return 0;
    }
    int step = 0;
    while(c0 !=1)
    {
        if (c0 % 2 == 0) 
        {   
            c0 = c0/2; //even
            
        }
        else
        {
            c0 = 3 * c0 + 1;//add
        }
        cout << c0 <<endl;
        step++;
       
    }
    cout << "Steps = " << step <<endl;
    return 0 ;
}
