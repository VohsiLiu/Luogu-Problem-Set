#include <iostream>
#include <cstring>

using namespace std;

int main(){
    int a=0;
    cin >> a;
    if (a == 0){
        cout << 0;
    }
    string s =to_string(a);
    char x[s.length()];
    if (a!=0){
        int first = 0;
        for (int i=0;i<s.length();i++){
            x[i]=s[s.length()-i-1];
        }
        for (int i=0;i<s.length();i++){
            if (x[i]!='0'){
                first =i;
                break;
            }
        }
        if (a>0){
            for (int i=first;i<s.length();i++){
                 cout << x[i];
            }
        }
        if (a<0){
            cout << '-';
            for (int i=first;i<s.length()-1;i++){
                cout << x[i];
            }
        }
    }      
    return 0;
}