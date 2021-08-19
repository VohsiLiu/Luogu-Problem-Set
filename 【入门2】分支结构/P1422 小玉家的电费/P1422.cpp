#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int a = 0;
    cin >> a;
    double sum = 0;
    if (a <= 150){
        sum = a * 0.4463;
    }
    if (a > 150 && a<=400){
        sum = 150*0.4463+(a-150)*0.4663;
    }
    if (a>400){
        sum = 150*0.4463+250*0.4663+(a-400)*0.5663;
    }
    printf("%.1f",sum);
    return 0;
}