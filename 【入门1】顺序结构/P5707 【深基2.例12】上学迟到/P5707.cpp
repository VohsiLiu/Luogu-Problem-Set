# include <iostream>

using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    int min=10;
    if (a%b == 0){
        min += a/b;
    }
    if (a % b != 0){
        min += a/b+1;
    }
    int hour = min/60;
    min = min-hour*60;
    int x,y=0;
    if (hour < 8){
        if (min == 0){
            x = 8-hour;
            y = min;
        }
        if (min != 0){
            x = 8-1-hour;
            y = 60-min;
        }
    }
    if (hour >= 8){
        if (min == 0){
            x = 24-(hour-8);
            y = min;
        }
        if (min != 0){
            x = 24-(hour-8)-1;
            y = 60-min;
        }
    }
    if (x<10 && y>=10){
        cout << "0" << x << ":" << y;
    }
    if (x>=10 && y<10){
        cout << x << ":" << "0" << y;
    }
    if (x>=10 && y>=10){
        cout << x << ":" << y;
    }
    if (x<10 && y<10){
        cout << "0" << x << ":" << 0 << y;
    }
    return 0;
}