# include <iostream>
# include <algorithm>
using namespace std;

int main(){
    int a[3];
    for (int i=0;i<3;i++){
        cin >> a[i];
    }
    sort(a,a+3);
    if (a[0]+a[1]<=a[2]){
        cout << "Not triangle" <<endl;
    }else{
        if (a[0]*a[0]+a[1]*a[1]==a[2]*a[2]){
            cout << "Right triangle" <<endl;
        }
        if (a[0]*a[0]+a[1]*a[1]>a[2]*a[2]){
            cout << "Acute triangle" <<endl;
        }
        if (a[0]*a[0]+a[1]*a[1]<a[2]*a[2]){
            cout << "Obtuse triangle" <<endl;
        }
        if (a[0]==a[1] || a[1]==a[2] || a[2]==a[0]){
            cout << "Isosceles triangle" <<endl;
        }
        if (a[0]==a[1] && a[1]==a[2]){
            cout << "Equilateral triangle" <<endl;
        }
    }
    return 0;
}