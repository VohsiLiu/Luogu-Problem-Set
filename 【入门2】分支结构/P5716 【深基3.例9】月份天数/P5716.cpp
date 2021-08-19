#include <iostream>
using namespace std;

int leapYear(int a){
    if (a%4==0 && a%100!=0){
        return 1;
    }else if(a%400 == 0){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int a,b = 0;
    cin >> a >> b;
    if(leapYear(a)&&b==2){
        cout << 29;
    }
    if (!leapYear(a)&&b==2){
        cout << 28;
    }
    if (b==1||b==3||b==5||b==7||b==8||b==10||b==12){
        cout << 31;
    }
    if (b==4||b==6||b==9||b==11){
        cout << 30;
    }
    return 0;
}