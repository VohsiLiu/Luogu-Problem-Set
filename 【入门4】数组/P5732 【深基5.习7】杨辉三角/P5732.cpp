#include <iostream>

using namespace std;

int main(){
	int n=0;
	cin >> n;
	int a[n][n]={1};
	if(n==1){
		cout << 1;
	}else{
		cout << 1 << endl;
		for(int i=1;i<n;i++){
			for(int j=0;j<=i;j++){
				if(j==0){
					a[i][j]=1;
					cout << a[i][j] << " ";
				}else if(j==i){
					a[i][j]=1;
					cout << a[i][j] << endl;
				}else{
					a[i][j]=a[i-1][j-1]+a[i-1][j];
					cout << a[i][j] << " ";
				}
			}
		}
	}
	return 0;
}