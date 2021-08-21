#include <iostream>
using namespace std;

string doubleDigits(int x){
    string s;
    if (x<10){
        s = "0"+to_string(x);
    }
    if (x>=10){
        s = ""+to_string(x);
    }
    return s;
}

int main(){
    int count = 1;
    int n = 0;
    cin >> n;
    for (int i=0;i<n;i++){
        for (int j=n-i;j>0;j--){
            cout << doubleDigits(count);
            count ++;
        }
        cout << endl;
    }
    return 0;
}