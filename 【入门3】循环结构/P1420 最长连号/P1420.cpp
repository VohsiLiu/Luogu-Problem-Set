#include <iostream>
using namespace std;

int main(){
    int n = 0;
    int ans = 1;
    int max = 1;
    cin >> n;
    int a[n];
    for (int i=0;i<n;i++){
        cin >> a[i];
    }
    for (int i=0;i<n;i++){
        if (a[i]==a[i+1]-1){
            ans++; 
        }else{
            ans=1;
        } 
        if (ans>max){
            max=ans;
        }
    }
    cout << max;
    return 0;
}