#include <iostream>

using namespace std;

int main(){
    int n = 0;
    cin >> n;
    if (n<=5){
        cout << "Local";
    }
    if (n>5){
        cout << "Luogu";
    }
    return 0;
}