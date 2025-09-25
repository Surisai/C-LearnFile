// input maxball
#include <iostream>
// input ballsno
#include <cstdlib>//it provides two functions: srand() and rand();
#include <ctime>
using namespace std;
// create array balls[ballsno]
bool IsIn(int v, int t[], int s){
//int v value you're testing , int t[]// stores no already drawn , int s // numsber in the array already drawn.
    for(int i = 0; i < s; i++){// iterate thru s first elements of t
        if(t[i] == v) return true;
    }
    return false;
}
// seed random with time
int RandBall(int mb){
    return rand() % mb + 1;

}

int main(void){
// for each draw from 0 to ballsno-1
//     generate random number
//     while number already exists in balls
//         generate again
//     store number in balls

// print all numbers
// free memory
    int maxball; //biggest number the lottery can have
    int ballsno;//number of balls you want to draw.
    cout<< "Max ball number? ";
    cin >> maxball;
    cout << "How many balls? ";
    cin >> ballsno;

    srand(time(NULL));// initialize random seed

    int *balls = new int[ballsno];
    for(int b = 0; b < ballsno; b++){
        int bl = RandBall(maxball);
        while(IsIn(bl, balls, b)){
            //check for duplication
            bl = RandBall(maxball);

        }
        balls[b] = bl;
    }


    //print result
    cout << "You lottery numbers : ";
    for(int b = 0 ; b < ballsno; b++){
        cout << balls[b] << " ";
    }
    cout << endl;
    //free memory;
    delete[] balls;
    return 0;




}