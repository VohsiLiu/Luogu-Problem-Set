#include <iostream>

using namespace std;

int main(){
    int n=0;
    int min=0;
    cin >> n >> min;
    for (int i=0;i<n-1;i++){
        int temp=0;
        cin >> temp;
        if(temp<min){
            min=temp;
        }
    }
    cout << min;
    return 0;
}