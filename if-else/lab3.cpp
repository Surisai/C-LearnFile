// Scenario
// Among the many measurement systems available, two seem to be the most widespread: metric and imperial. To make things simpler, we assume that the first one uses the "meter" as its only unit (expressed as a real number), while the second uses the "foot" (always an integer) and the "inch" (a real number).

// Your task is to write a simple "measurement converter". We want it to perform the following actions:

// ask the user which system she/he uses to input data; we assume that 0 means "metric" and 1 means "imperial";
// depending on the user's answer, ask either for meters or feet and inches;
// output the distance in proper (different) units: either in feet and inches or in meters;
// a result outputted as metric should look like 123.4m;
// a result outputted as imperial should look like 12'3.5".
// Look at the code in the editor – it's only a template. Use it to implement the whole converter.

// Make your code smart – it shouldn't be fooled by stupid or unreasonable inputs.

// Test your code using the data we've provided.

#include <iostream>
#include <cmath>
using namespace std;
int main(void){
    int sys;
    float m, ft, in;
    cout << "Select measurement system ( 0 = metric, 1 = imperial): ";
    cin >> sys;

    //check input cvalidity for system chioce
    if(cin.fail()){
        cout << "Invalid input : not a number!" << endl;
        return -1;
    }

    if (sys == 0){
        cout << "Enter maters : ";
        cin >> m;
        if (m < 0){
            cout << "Invalid input: meter cannat be nagative! "<< endl;
            return -1;
        }

        double total_inches = m/0.0254; //convert metric
        ft = (int)(total_inches /12) ;
        in = total_inches -( ft *12);
        cout << ft << "'"<< in << "\""<< endl;
        
    }else if(sys == 1){
        cout << "Enter feet (ft) : ";
        cin >> ft;
        cout << "Enter inches: ";
        cin >> in;

        if (cin.fail() ||ft < 0 || in < 0 || in >= 12){
            cout << "Invalid input : feet must be. >=0  and inches between 0 to 12 " <<endl;
            return -1;
        }
        
        double total_inches = (ft *12) + in;
        m = total_inches * 0.0254;
        
        cout << "Result : " << m << "m"<< endl;

    }
    else 
    {
        cout << "Invalid selection ! use 0 or 1 for entering meaturement system" <<endl;
        return -1;
    }
    return 0 ;

}