#include <iostream>

using namespace std;

int main(){
	int n=0;
	cin >> n;
	int a[n]={0};
	int b[n]={0};
	for(int i=0;i<n;i++){
		cin >> a[i];
		int temp=0;
		for(int j=0;j<i;j++){
			if(a[i]>a[j]){
				temp++;
			}
		}
		b[i]=temp;
	}
	for (int i=0;i<n;i++){
		cout << b[i] << " ";
	}
	
	return 0;
}