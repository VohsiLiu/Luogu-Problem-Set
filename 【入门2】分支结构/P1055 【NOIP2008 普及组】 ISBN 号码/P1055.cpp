#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    char final = s[12];
    int each[9];
    int count = 0;
    for (int i=0; i<11;i++){
        if(i!=1 && i!= 5){
            each[count] = s[i]-'0';
            count++;
        }
    }
    int sum = 0;
    for (int i=0;i<count;i++){
        sum += each[i]*(i+1);
    }
    int real = sum % 11;
    if (real == 10){
        if (final == 'X'){
            cout << "Right";
        }
        if (final != 'X'){
            cout << s.substr(0,12) <<'X';
        }
    }else{
        if (final == real+'0'){
            cout << "Right";
        }else{
            cout << s.substr(0,12) << real;
        }
    }
    return 0;
}