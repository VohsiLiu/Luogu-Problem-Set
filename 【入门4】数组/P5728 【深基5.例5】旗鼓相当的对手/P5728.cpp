#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n=0;
	cin >> n;
	int a[n][3]={0};
	for (int i=0;i<n;i++){
		int x,y,z;
		cin >> x >> y >> z;
		a[i][0]=x;
		a[i][1]=y;
		a[i][2]=z;
	}
	int sum=0;
	for (int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if((abs(a[i][0]-a[j][0])<=5)&&(abs(a[i][1]-a[j][1])<=5)&&(abs(a[i][2]-a[j][2])<=5)
			&&(abs(a[i][0]+a[i][1]+a[i][2]-a[j][0]-a[j][1]-a[j][2])<=10)){
				sum++;
			}
		}
	}
	cout << sum;
	return 0;
}