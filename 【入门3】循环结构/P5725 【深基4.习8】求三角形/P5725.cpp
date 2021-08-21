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
    int suqare = 1;
    int n = 0;
    cin >> n;
    for (int i=0;i<n;i++){
        for (int j=n;j>0;j--){
            cout << doubleDigits(suqare);
            suqare ++;
        }
        cout << endl;
    }
    int matrix = 1;
    cout << endl;
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (j<n-i-1){
                cout << "  ";
            }
            if (j>=n-i-1){
                cout << doubleDigits(matrix);
                matrix ++;
            }
        }
        cout << endl;
    }
    return 0;
}