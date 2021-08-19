#include <iostream>
#include <cstdio>


using namespace std;

bool det1(int x){
    if (x%2 == 0){
        return true;
    }
    return false;
}

bool det2(int x){
    if (x>4 && x<13){
        return true;
    }
    return false;
}

int main(){
    unsigned int a = 0;
    cin >> a;
    int x[4]={0};
    if (det1(a) && det2(a)){
        x[0] = 1;
    }
    if (det1(a) || det2(a)){
        x[1] = 1;
    }
    if ((det1(a) && !det2(a)) || (!det1(a) && det2(a)) ){
        x[2] = 1;
    }
    if (x[1] == 0){
        x[3] = 1;
    }
    printf("%d %d %d %d",x[0],x[1],x[2],x[3]);
    return 0;
}