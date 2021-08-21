#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    int k1=0;
    int k2=0;
    int sum1=0;
    int sum2=0;
    for (int i=0;i<n;i++){
        if((i+1)%k==0){
            k1++;
            sum1+=i+1;
        }else{
            k2++;
            sum2+=i+1;
        }
    }
    double ans1=sum1*1.0/k1;
    double ans2=sum2*1.0/k2;
    printf("%.1f %.1f",ans1,ans2);
    return 0;
}