#include <iostream>
using namespace std;

void add(int n){
	if(n<10){
		cout << "  " << n; 
	}
	if(n>=10){
		cout << " " << n;
	}
}

int main(){
	int n=0;
	cin >> n;
	int a[10][10]={0};
	a[1][1]=1;
	int x=1,y=1;
	int k=2;
	while(k<=n*n){
		while(a[x][y+1]==0&&y<n){
			y++;
			a[x][y]=k;
			k++;
		}
		while(a[x+1][y]==0&&x<n){
			x++;
			a[x][y]=k;
			k++;
		}
		while(a[x-1][y]==0&&x>1){
			x--;
			a[x][y]=k;
			k++;
		}
		while(a[x][y-1]==0&&y>1){
			y--;
			a[x][y]=k;
			k++;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			add(a[i][j]);
			if(j==n){
				cout << endl;
			}
		}
	}
	return 0;
}