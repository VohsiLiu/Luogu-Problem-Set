#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int l,m=0;
	cin >> l >> m;
	char a[l+1];
	memset(a,'1',sizeof(a));
	for (int i=0;i<m;i++){
		int temp1,temp2;
		cin >> temp1 >> temp2;
		//b[i]=temp1;
		//b[i+1]=temp2;
		memset(&a[temp1],'0',(temp2-temp1+1));
	}
	int sum=0;
	for (int i=0;i<l+1;i++){
		sum+=a[i]-'0';
	}
	cout << sum;
	return 0;
}