#include <iostream>

using namespace std;

int main(){
	int a[100]={0};
	int sum=0;
	int temp=0;
	for(int i=0;i<100;i++){
		cin >> temp;
		if(temp==0){
			break;
		}
		a[i]=temp;
		sum++;
	}
	for(int i=0;i<sum;i++){
		cout << a[sum-i-1] << " ";
	}
	return 0;
}