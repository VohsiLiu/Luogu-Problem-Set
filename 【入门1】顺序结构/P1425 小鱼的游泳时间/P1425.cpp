#include<iostream>
using namespace std;

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int x,y;
    if (d>=b){
        y=d-b;
        x=c-a;
    }
    if (d<b){
        y=d+60-b;
        x=c-1-a;
    }
    cout << x << " " << y;
    return 0;
}