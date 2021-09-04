#include <iostream>
#include <cstring>

using namespace std;

int main(){
	int n,m,k;
	cin >> n >> m >> k;
	int local[n+1][n+1]={0};
	memset(local,0,sizeof(local));
	int fire[13][2]={{0,0},{0,-2},{0,-1},{0,1},{0,2},{-2,0},
					 {-1,0},{1,0},{2,0},{-1,-1},{-1,1},{1,-1},{1,1}};
	int stone[25][2]={{-2,-2},{-2,-1},{-2,0},{-2,1},{-2,2},{-1,-2},{-1,-1},{-1,0},
					  {-1,1},{-1,2},{0,-2},{0,-1},{0,0},{0,1},{0,2},{1,-2},{1,-1},
					  {1,0},{1,1},{1,2},{2,-2},{2,-1},{2,0},{2,1},{2,2}}; 
	for(int i=0;i<m;i++){
		int fire_x=0,fire_y=0;
		cin >> fire_x >> fire_y;
		for(int j=0;j<13;j++){
			if(fire_x+fire[j][0]>=1&&fire_x+fire[j][0]<=n
			&&fire_y+fire[j][1]>=1&&fire_y+fire[j][1]<=n){
				local[fire_x+fire[j][0]][fire_y+fire[j][1]]=1;
			}
		}
	}
	for(int i=0;i<k;i++){
		int stone_x=0,stone_y=0;
		cin >> stone_x >> stone_y;
		for(int j=0;j<25;j++){
			if(stone_x+stone[j][0]>=1&&stone_x+stone[j][0]<=n
			&&stone_y+stone[j][1]>=1&&stone_y+stone[j][1]<=n){
				local[stone_x+stone[j][0]][stone_y+stone[j][1]]=1;
			}
		}
	}
	int sum=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			sum+=local[i][j];
		}
	}
	cout << n*n-sum;
	return 0;
}