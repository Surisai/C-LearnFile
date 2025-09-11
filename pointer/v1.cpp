#include <iostream>
using namespace std;

int main() {
    int matrix[10][10] = { };
    int *p = &matrix[0][0];   // pointer to first element

    // 👉 Your job:
    // Use *(p + something) = value
    // to make first row all 1s, others 0s
//  1 1 1 1 1 1 1 1 1 1
//  0 0 0 0 0 0 0 0 0 0
//  0 0 0 0 0 0 0 0 0 0
//  0 0 0 0 0 0 0 0 0 0
//  0 0 0 0 0 0 0 0 0 0
//  0 0 0 0 0 0 0 0 0 0
//  0 0 0 0 0 0 0 0 0 0
//  0 0 0 0 0 0 0 0 0 0
//  0 0 0 0 0 0 0 0 0 0
//  0 0 0 0 0 0 0 0 0 0

    // for(int j = 0 ; j <10 ; j++){
    //      *(p + j) = 1;
    //     }
//  1 0 0 0 0 0 0 0 0 0
//  0 1 0 0 0 0 0 0 0 0
//  0 0 1 0 0 0 0 0 0 0
//  0 0 0 1 0 0 0 0 0 0
//  0 0 0 0 1 0 0 0 0 0
//  0 0 0 0 0 1 0 0 0 0
//  0 0 0 0 0 0 1 0 0 0
//  0 0 0 0 0 0 0 1 0 0
//  0 0 0 0 0 0 0 0 1 0
//  0 0 0 0 0 0 0 0 0 1

    // for(int i = 0; i < 10; i++){
    //     *(p + i * 10 +i) =1;
    // }
    
    // for(int i = 0 ;i < 10 ; i ++){
    //     for(int j = 0 ; j < 10 ; j++){
    //     *( p + i* 10 + j  ) = (i * i) + ( j* j);
    //     }
        
    // }
     for(int i = 0 ;i < 10 ; i ++){
        for(int j = 0 ; j < 10 ; j++){
        *( p + i* 10 + j  ) = (i +1) * ( j+1);
        }
        
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout.width(6);
            cout << *(p + i * 10 + j);
        }
        cout << endl;
    }
    return 0;
}
