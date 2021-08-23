#include <iostream>

using namespace std;

bool isPrime(int n){
	if (n==2){
		return true;
	}
	for (int i=2;i<n;i++){
		if(n%i==0){
			return false;
			break;
		}
	}
	return true;
}

int main(){
	int n=0;
	cin >> n;
	int min;
	for (int i=2;i<n;i++){
		if(isPrime(i)&&n%i==0){
			min=i;
			break;
		}
	}
	cout << n/min;
	return 0;
}