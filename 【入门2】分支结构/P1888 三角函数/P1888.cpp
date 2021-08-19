#include <iostream>
using namespace std;


int gcd(int x, int y){
    while (y!=0){
        int r = x%y;
        x = y;
        y = r;
    }
    return x;
} 


int main(){
    int a,b,c;
    cin >> a  >> b >> c;
    int x = max(max(a,b),max(b,c));
    int y = min(min(a,b),min(b,c));
    int r = gcd(x,y);
    cout << y/r << "/" << x/r;
    return 0;
}