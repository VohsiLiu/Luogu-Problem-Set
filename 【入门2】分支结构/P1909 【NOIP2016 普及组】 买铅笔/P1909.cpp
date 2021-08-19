#include <iostream>

using namespace std;

int count(int x, int y){
    if (x%y == 0){
        return x/y;
    }else{
        return x/y+1;
    } 
}

int main(){
    int n =0;
    int x1,y1,x2,y2,x3,y3;
    cin >> n >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    int sum1 = count(n,x1)*y1;
    int sum2 = count(n,x2)*y2;
    int sum3 = count(n,x3)*y3;
    cout << min(min(sum1,sum2),min(sum2,sum3));
    return 0;
}