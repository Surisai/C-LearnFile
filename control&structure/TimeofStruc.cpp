#include <iostream>
using namespace std;

struct TIME {
    int h;
    int m;
};

int main(){
    TIME time;
    int dur;
    dur = time.h = time.m = -1;
    while(time.h < 0 || time.h > 23){cout << "Enter hour : ";
        cin >> time.h;
        if(time.h < 0 || time.h >23){
            cout << "Invalid hour : " << time.h <<endl;

        }
        while(time.m < 0 || time.m >59){
            cout << "Enter minute : ";
            cin >> time.m;
            if(time.m < 0 || time.h >59)
                cout << "Invalid minut :" << time.m <<endl;

        }
        while(dur < 0){
            cout <<"Enter duration (minutes) :";
            cin >>dur;
            if(dur < 0)
                cout << "Invalid duration : " <<dur << endl;

        }

        int hh = dur /60;
        int mm = dur % 60;
        time.m += mm;
        time.h += hh;
        time.h += time.m /60;
        time.m %= 60;
        time.h %= 24;
        if(time.h < 10)cout << 0 ;
        cout << time.h << ":";
        if(time.m <10) cout << 0;
        cout << time.m << endl;
    }

    return 0;
}