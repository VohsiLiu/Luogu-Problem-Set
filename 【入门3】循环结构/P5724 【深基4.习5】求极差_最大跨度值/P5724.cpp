#include <iostream>

using namespace std;

int main(){
    int n=0;
    int a1=0;
    cin >> n >> a1;
    int max=a1;
    int min=a1;
    for (int i=0;i<n-1;i++){
        int temp=0;
        cin >> temp;
        if (temp>max){
            max=temp;
        }
        if (temp<min){
            min=temp;
        }
    }
    cout << max-min;
    return 0;
}