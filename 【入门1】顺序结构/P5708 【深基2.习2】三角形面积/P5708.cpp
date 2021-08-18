#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

int main()
{
    double a,b,c;
    cin >> a >> b >> c;
    double p = (a+b+c)/2.0;
    double s = sqrt(p*(p-a)*(p-b)*(p-c))+0.0;
    printf("%.1f",s);
    return 0;
}