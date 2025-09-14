// /// 10 X10 Spiral order with pointer 
// Task

// Fill a 10×10 matrix with numbers 1 → 100 in spiral order:

// Start at top-left [0][0]

// Go right → down → left → up, and repeat toward the center

// Use pointer arithmetic only (*(p + i*10 + j))

// Don’t use [] inside loops (except for declaration)
//     1. Fill top row: left → right
//       - row = top, column = left to right
//       - matrix[top][j] = num++
//     2. Increment top boundary
//       - top++

//     3. Fill right column: top → bottom
//       - column = right, row = top to bottom
//       - matrix[i][right] = num++
//     4. Decrement right boundary
//       - right--

//     5. Fill bottom row: right → left
//       - row = bottom, column = right down to left
//       - matrix[bottom][j] = num++
//     6. Decrement bottom boundary
//       - bottom--

//     7. Fill left column: bottom → top
//       - column = left, row = bottom down to top
//       - matrix[i][left] = num++
//     8. Increment left boundary
//       - left++

#include <iostream>
using namespace std;



int main() {
    int matrix[10][10] = { };
    int *p = &matrix[0][0];
    int top = 0 , bottom = 9 , left = 0 , right = 9 , num =1;
//   while num <= 100:
while(num <=100){
    //fill top row
    for(int j = left; j <= right ;j++){
        *(p+ top* 10 +j) = num++;
    }
    top++;
    // fill right column
    for(int i = top ; i <= bottom; i++){
        *(p + i * 10 + right) = num++;
    }
    right--;
    
    //fill bottom row
    for(int j = right; j >= left ; j-- ){
        *(p + bottom*10 + j ) = num++;
        
    }
    bottom--;
    
    //fil left column
    for(int i = bottom; i >= top; i--){
        *(p + i * 10 + left) = num++;
    }
    left++;
    
}


 // Print matrix
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            cout.width(4);
            cout << *(p + i*10 + j);
        }
        cout << endl;
    }

    cout << endl;
  return 0;
  
    
}