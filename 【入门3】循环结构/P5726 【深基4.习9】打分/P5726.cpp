#include <iostream>
#include <cstdio>
using namespace std;


int main(){
    int n = 0;
    int a1 = 0;
    cin >> n >> a1;
    int max=a1;
    int min=a1;
    int sum=a1;
    int a[n]={a1};
    for (int i=1;i<n;i++){
        cin >> a[i];
        sum+=a[i];
        if (a[i]>max){
            max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }
    }
    sum=sum-min-max;
    double ans=sum/((n-2)*1.0);
    printf("%.2f",ans);
    return 0;
}