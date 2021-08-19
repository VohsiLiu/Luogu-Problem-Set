#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    unsigned int a=0;
    cin >> a;
    if (a<2){
        printf("Today, I ate %d apple.",a);
    }
    if (a>1){
        printf("Today, I ate %d apples.",a);
    }
    return 0;
}