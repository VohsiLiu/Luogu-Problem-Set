#include <iostream>

using namespace std;

int main(){
	int k=0;
	cin >> k;
	double sum=0.0;
	long long int n =0;
	for (long long int i =1;;i++){
		sum +=1.0/i;
		n++;
		if (sum>k){
			break;

		}
	}
	cout << n;
	return 0;
}