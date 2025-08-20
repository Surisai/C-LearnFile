#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    float originalprice, disrate,disvalue,finalprice;
    cout << "Welcom to calculate discout for your product\n";
    cout << "Please enter  your price : ";
    cin >> originalprice;

    cout << "Please enter discout price of product : ";
    cin >> disrate;

    if (originalprice < 0 ||  0 > disrate || disrate > 100){
        cout << "This is not ERROR  calculate "<< endl;
    }
    else {
        disvalue = (disrate/100)* originalprice;
        finalprice = originalprice - disvalue;

        cout<<fixed<< setprecision(2)<<endl;
        cout << "Discout : "<<disvalue<<endl;
        cout << "Final price : " << finalprice<<endl;
    }
    return 0;
}