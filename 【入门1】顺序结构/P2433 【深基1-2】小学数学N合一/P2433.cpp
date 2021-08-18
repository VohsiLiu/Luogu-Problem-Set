#include <iostream>
#include <stdio.h>
#include<cmath>
using namespace std;

int main(){
    int T;
    const double pi=3.141593;
    cin >> T;
    if (T == 1) {
        cout << "I love Luogu!";
    } else if (T == 2) {
        cout << 2 + 4 << " " << 10 - 2 - 4;
    } else if (T == 3) {
        cout << 14/4 << endl << 4*(14/4) << endl << 14-(4*(14/4)) <<endl;
    } else if (T == 4) {
        printf("%.3f",float(500)/3);//将其中一个数转换为float
    } else if (T == 5) {
        cout << (220+260)/(20+12);
    } else if (T == 6) {
        cout << sqrt(6*6+9*9);
    } else if (T == 7) {
        cout << 100+10 <<endl << 110-20 <<endl << 0 <<endl; 
    } else if (T == 8) {
        cout << pi*10 << endl << pi*25 << endl <<4.0/3.0*pi*125 << endl;
    } else if (T == 9) {
        cout << ((((1+1)*2)+1)*2+1)*2;
    } else if (T == 10) {
        cout << 9;
    } else if (T == 11) {
        cout<<100.0/3;
    } else if (T == 12) {
       cout<<(int)('M'-'A')+1<<endl<<(char)(18+'A'-1);
    } else if (T == 13) {
        cout<<(int)(pow(4.0/3.0*pi*(4.0*4*4+10*10*10),1.0*1/3));
    } else if (T == 14) {
        for(int i=1;i<=110;i++){
            int s=120-i;
            int ans=s*i;
            if(ans==3500) {cout<<i<<endl;break;}
        }
    }
    return 0;
}