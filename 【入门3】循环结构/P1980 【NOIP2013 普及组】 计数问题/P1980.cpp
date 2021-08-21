#include <iostream>
#include <cstring>
using namespace std;

int main(){
    string s;
    int n,x=0;
    cin >> n >> x;
    for (int i=0;i<n;i++){
        s += to_string(i+1);
    }
    int sum=0;
    for (int i=0;i<s.length();i++){
        if (s[i]==x+'0'){
            sum++;
        }
    }
    cout << sum;
    return 0;
}