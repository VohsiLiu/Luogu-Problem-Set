#include <iostream>
#include <cstring>

using namespace std;

int main(){
	int w,x,h;
	cin >> w >> x >> h;
	char a[w][x][h];
	memset(a,'1',sizeof(a));
	int q;
	cin >> q;
	for (int m=0;m<q;m++){
		int x1,y1,z1,x2,y2,z2;
		cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
		for (int i=x1;i<=x2;i++){
			for (int j=y1;j<=y2;j++){
				for (int k=z1;k<=z2;k++){
					a[i-1][j-1][k-1]='0';
				}
			}
		}
	} 
	int sum=0;
	for (int i=0;i<w;i++){
		for (int j=0;j<x;j++){
			for (int k=0;k<h;k++){
				sum+=a[i][j][k]-'0';
			}
		}
	}
	cout << sum;
	return 0;
}