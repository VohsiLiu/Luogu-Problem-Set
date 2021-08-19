#include <iostream>

using namespace std;

int main(){
    int x,n;
    cin >> x >> n;
    //补成从周一开始
    int day = n+x-1-(n+x-1)/7*2;//排除整周的周六周日的天数
    //去掉补的天数
    if (x<6){
        day = day-x+1;
    }
    if (x>=6){
        day = day-5;
    }
    //去掉后面的天数
    if ((n+x-1)%7>5){
        day = day-(n+x-1)%7+5;
    }
    cout << day*250;
    return 0;
}