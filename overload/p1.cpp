// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
void swap(float &a, float &b){
    float temp = a;
    a = b;
    b = temp;
    
}


int main() {
    // Write C++ code here
   int x = 5, y = 19;
   
   cout << " Before swap x = " << x << ", y= "<< y<< endl;
    swap(x,y);
    cout << "After swap: x = "<< x<< ", y = "<< y << endl;
    
    
    float f1= 3.4, f2= 5.4;
    cout << "Before swap f1 = "<< f1<< " , f2 = "<< f2<< endl;
    swap(f1, f2);
    cout << "After swap : f1 = "<< f1 << " , f2 = "<< f2 << endl;
    
    return 0;
}