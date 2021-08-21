#include <iostream>

using namespace std;

int main(){
    int n=0;
    cin >> n;
    int ans=1;
    while (n!=1){
        n=n/2;
        ans++;
    }
    cout << ans;
    return 0;
}