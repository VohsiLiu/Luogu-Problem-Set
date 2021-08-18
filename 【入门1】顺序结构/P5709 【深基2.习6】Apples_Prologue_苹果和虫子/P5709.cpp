#include <iostream>

using namespace std;

int main(){
    unsigned int m,t,s;
    cin >> m >> t >> s;
    if (t==0){
        cout << 0;
    }else{
        int eaten = 0;
        if (s%t == 0){
            eaten = s/t;
        }
        if (s%t != 0){
            eaten = s/t+1;
        }
        if (eaten >= m){
            eaten=m;
        }
        cout << m-eaten;
    }
    return 0;
}