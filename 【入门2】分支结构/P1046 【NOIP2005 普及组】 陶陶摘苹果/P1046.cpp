#include <iostream>

using namespace std;

int main(){
    int a[10];
    int x = 0;
    for (int i=0; i<10; i++){
        cin >> a[i];
    }
    int b = 0;
    cin >> b;
    for (int i=0; i<10; i++){
        if (b+30 >= a[i]){
            x++;
        }
    }
    cout << x;
    return 0;
}