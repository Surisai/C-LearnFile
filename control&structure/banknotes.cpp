#include <iostream>
using namespace std;

int main() {
    // 
  int banknotes[5] = {50,20,10,5,1};
  int amount;
  cout << " Enter amount to withdraw : ";
   cin >> amount ;
   bool first = true;
   
   for( int i = 0 ; i < 5 ; i++){
       
       int count = amount / banknotes[i];
       amount %= banknotes[i];
       
       for(int j = 0 ; j < count ; j ++){
           if(!first) cout << " ";
           cout << banknotes[i];
           first = false;
       }
       
   }

    return 0;
}