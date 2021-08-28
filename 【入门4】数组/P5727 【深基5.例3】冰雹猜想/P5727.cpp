#include <iostream>

using namespace std;

int main(){
	int n=0;
	cin >> n;
	int sum=0;
	int a[10000];
	a[0]=n;
	while(n!=1){
		sum++;
		if(n%2==1){
			n=3*n+1;
		}else{
			n=n/2;
		}
		a[sum]=n;
	}
	for(int i=0;i<sum+1;i++){
		cout << a[sum-i] << " ";
	}
	return 0;
}