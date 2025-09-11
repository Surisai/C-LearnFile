// Online C++ compiler to run C++ program online

#include <iostream>
using namespace std;

int main() {
    int matrix[10][10] = {};
    int *p = &matrix[0][0];
    
    
///
for(int i = 0; i < 10 ; i++){
    for(int j = 0 ; j < 10; j++)
    {
        *(p + i * 10 + j) = i*10 +j;
    }
}

cout << "Before transpone number : "; 
cout << endl;
cout << endl;
for(int i = 0 ;i < 10 ; i++){
    for(int j = 0 ;j < 10 ; j++){
        cout.width(4);
        cout << *(p + i *10 +j);
    }
    cout << endl;
}

///after transpose the matrix
for(int i = 0 ; i < 10 ;i++){
    for(int j = i +1; j <10; j++){
        int temp = *(p+ i *10 + j);
        *(p+i * 10 +j) = *( p + j * 10 +i);
        *(p+j * 10 + i) = temp;
    }
}


cout << "After transpose number : ";
cout << endl;

cout << endl;
for(int i = 0 ;i < 10 ; i++){
    for(int j = 0 ;j < 10 ; j++){
        cout.width(4);
        cout << *(p + i *10 +j);
    }
    cout << endl;
}


return 0 ;


}