#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main(){
	double x1,y1,x2,y2,x3,y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	double ans=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2))+sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3))+sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
	printf("%.2f",ans);
	return 0;
}