#include <iostream>

using namespace std;

int main(){
    int each[12];
    for (int i=0;i<12;i++){
        cin >> each[i];
    }
    int left=0;
    int mom=0;
    for (int i=0;i<12;i++){
        left=left+300-each[i];
        if (left<0){
            cout << -(i+1);
            break;
        }
        if (left>=100){
            mom+=left/100*100;
            left=left-(left/100*100);
        }
        if (i==11){
            cout << mom*1.2+left;
        }
    }
    return 0;
}