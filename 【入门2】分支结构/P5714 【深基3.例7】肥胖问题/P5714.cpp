# include <iostream>

using namespace std;

int main(){
    float a,b;
    cin >> a >> b;
    float x = a/(b*b);
    if (x<18.5){
        cout << "Underweight";
    }
    else if (x>=18.5 && x<24){
        cout << "Normal";
    }
    else cout << x <<endl << "Overweight";
    return 0;
}