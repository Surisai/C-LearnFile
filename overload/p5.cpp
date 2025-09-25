#include <iostream>
#include <cstdlib>///library for randome number
#include <ctime>
#include <vector>

using namespace std;
//check value of passing value and size
bool IsIn(int v, const vector<int>& t){
    for(int x: t){
        if(x == v){
            return true;
        }
        
    }
    return false; // not found
}

//provind the radom time
int RandBall(int mb){
    return rand() % mb +1;
}

//founction main 
int main(){
    //initial value 
    int maxball, ballsno;

    cout << "Max ball number ? : ";
    cin >> maxball;
    cout << endl;
    cout << "How many balls? : ";
    cin >> ballsno;


    if(maxball <= 0){
        cout << "Eror : Max ball number must ne positive" <<endl;
        return 1;
    }
    if(ballsno <= 0 ){
        cout << "Error : Number of ball must be positive " << endl;
        return 1;
    }


    if(ballsno > maxball){
        cout << "Error : You cannot draw more balls than exist " <<endl;
        return 1;

    }
    
    srand(time(NULL));
    vector<int> balls;//dynamiccontainer for dranw

    for (int b = 0; b < ballsno; b++){
        int bl = RandBall(maxball);
        while(IsIn(bl, balls))
            bl = RandBall(maxball);
        balls.push_back(bl);

    }

    cout <<" You lottery number : ";
    for(int num : balls)
        cout << num << " ";
    cout << endl;

    return 0;

}