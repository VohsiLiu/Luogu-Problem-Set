#include <iostream>
using namespace std;

int main(){
    double m=0.0;
    cin >> m;
    int ans=1;
    double left=m-2.0;
    double each=2.0;
    while(left>0){
        each=each*0.98;
        left=left-each;
        ans++;
    }
    cout << ans;
    return 0;
}