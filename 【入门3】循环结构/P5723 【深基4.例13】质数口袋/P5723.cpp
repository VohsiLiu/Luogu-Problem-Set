#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int l = 0;
    cin >> l;
    bool isPrime[l];
    int prime[l]={0};
    memset(isPrime,true,sizeof(isPrime));
    int sum = 0;
    for (int i=2;i<l;i++){
        if (isPrime[i]==true){
            prime[sum++]=i;
        }
        for (int j=0;j<sum&&prime[j]*i<l;j++){
            isPrime[i * prime[j]] = false;
            if (i%prime[j]==0){
                break;
            }
        }
    }
    int total=0;
    int x=0;
    for (int i=0;i<sum && x+prime[i]<=l;i++){
        x+=prime[i];
        cout << prime[i] <<endl;
        total++;
        
    }
    cout << total;
    return 0;
}