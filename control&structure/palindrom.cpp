#include <iostream>
//#include <vector>
using namespace std;

int main(void) {

	int vector[] = {2,0,1, 7, 3, 8,55,3, 3, 7, 1,3,4};
    //vector<int> arr = {2,0,1, 7, 3, 8,55,3, 3, 7, 1,3,4};
	bool ispalindrome = true;
    //int n = arr.size();
	int n = sizeof(vector) / sizeof(vector[0]);

	// Insert your code here	
    for(int i ; i < n/2 ; i++){
        if(vector[i] != vector[n - 1 - i]){
            ispalindrome = false;
            break;
        }
        
    }
	if(ispalindrome)
		cout << "It's a palindrome";
	else
		cout << "It isn't a palindrome";
	cout << endl;
	return 0;
}