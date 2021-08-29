#include <iostream>

using namespace std;

bool isIn(int p[], int n){
	for (int i=0;i<7;i++){
		if (n==p[i]){
			return true;
			break;
		}
	}
	return false;
}

int main(){
	int n=0;
	cin >> n;
	int num[7];
	for (int i=0;i<7;i++){
		int temp=0;
		cin >> temp;
		num[i]=temp;
	}
	int a[n][7];
	for (int i=0;i<n;i++){
		int x1,x2,x3,x4,x5,x6,x7;
		cin >> x1 >> x2 >> x3 >> x4 >> x5 >> x6 >> x7;
		a[i][0]=x1;
		a[i][1]=x2;
		a[i][2]=x3;
		a[i][3]=x4;
		a[i][4]=x5;
		a[i][5]=x6;
		a[i][6]=x7;
	}
	int ans[7]={0};
	for (int i=0;i<n;i++){
		int sum=0;
		for (int j=0;j<7;j++){
			if(isIn(num,a[i][j])){
				sum++;
			}
		}
		if(sum==7){
			ans[0]++;
		}
		if(sum==6){
			ans[1]++;
		}
		if(sum==5){
			ans[2]++;
		}
		if(sum==4){
			ans[3]++;
		}
		if(sum==3){
			ans[4]++;
		}
		if(sum==2){
			ans[5]++;
		}
		if(sum==1){
			ans[6]++;
		}
	}
	for (int i=0;i<7;i++){
		cout << ans[i] << " ";
	}
	return 0;
}