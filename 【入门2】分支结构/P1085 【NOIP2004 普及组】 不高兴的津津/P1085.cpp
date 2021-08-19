#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a[7][2];
    int sum[7];
    for (int i=0;i<7;i++){
        for (int j=0;j<2;j++){
            cin >> a[i][j];
            if (j==1){
                sum[i]=a[i][0]+a[i][1];
            }
        }
    }
    int m = *max_element(sum,sum+7);
    for (int i=0;i<7;i++){
        if (sum[i]==m){
            cout << i+1;
            break;
        }
    }
}