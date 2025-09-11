#include <iostream>

using namespace std;

int main(){
    int matrix[10][10] = {};
    int *p = &matrix[0][0];//(int* )matrix; // &matrix[0][0]


    //value to fill in the matrix 10 * 10
    for(int k = 0 ; k <100 ; k++){
        *(p+k) = k +1;
    }

    //the way printing on the matrix 10 x 10
    for(int i = 0 ;i < 10 ; i++){
        for(int j = 0 ; j <10 ; j++){
            cout.width(4);
            cout << *(p + i * 10 +j); ///read value through pointer
        }
    }
    return 0 ;

 }
