#include <iostream>
using namespace std;

void scale(int &n, int factor = 2){
    n *= factor;

}
void scale(float &n , float factor = 2.5f){
    n *= factor;
}

int main(){
    int a = 5;
    float b = 4.0;
    cout << "Before scaling: a = "<< a<< " , b = "<< b<<endl;
    scale(a);
    scale(b, 1.5f);
    cout << "After acaling : a = "<< a<< " , b = "<<b << endl;
    return 0;
}
