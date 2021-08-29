#include <iostream>
#include<algorithm>
using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	int a[n-m+1]={0};
	int b[n]={0};
	for (int i=0;i<n;i++){
		cin >> b[i];
	}
	for (int i=0;i<n-m+1;i++){
		int sum=0;
		for (int j=i;j<m+i;j++){
			sum+=b[j];
		}
		a[i]=sum;
	}
	cout << *min_element(a,a+sizeof(a)/sizeof(a[0]));
	return 0;
}