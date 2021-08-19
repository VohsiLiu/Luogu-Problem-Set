#include <iostream>
#include <cstdio>
using namespace std;

//冒泡排序
void exchage(int *x, int *y){
    int temp = *y;
    *y =*x;
    *x =temp;
}

int main(){
    int a[3];
    for (int i=0;i<3;i++){
        cin >> a[i];
    }
    int len = sizeof(a)/sizeof(a[0]);
    for (int i=0;i<len;i++){
        for (int j=0;j<len-i-1;j++){
            if (a[j]>a[j+1]){
                exchage(&a[j],&a[j+1]);
            }
        }
    }
    printf("%d %d %d",a[0],a[1],a[2]);
    return 0;
}