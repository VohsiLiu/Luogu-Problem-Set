#include <iostream>
using namespace std;


int main(){
    int n = 0;
    cin >> n;
    long long int a=0,b=1,c=0;
    if (n==0){
        cout << "0.00";
    }
    if (n==1){
        cout << "1.00";
    }
    if (n>1){
        for (int i=1;i<n;i++){
            c=a+b;
            a=b;
            b=c;
        }
        cout << c << ".00";
    }
}