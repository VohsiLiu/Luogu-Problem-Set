#include <iostream>

using namespace std;

int main(){
    int a[3];
    for (int i=0;i<3;i++){
        cin >> a[i];
    }
    int sum =a[0]+a[1]+a[2];
    int m1=min(min(a[0],a[1]),min(a[1],a[2]));
    int m2=max(max(a[0],a[1]),max(a[1],a[2]));
    a[0]=m1;
    a[1]=sum-m1-m2;
    a[2]=m2;
    char b[3];
    for (int i=0;i<3;i++){
        cin >> b[i];
        cout << a[int (b[i]-'A')] <<" ";
    }
    return 0;
}