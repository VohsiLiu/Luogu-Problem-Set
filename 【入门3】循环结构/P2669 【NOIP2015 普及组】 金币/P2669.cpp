#include <iostream>

using namespace std;

int main(){
	int k=0;
	cin >> k;
	long long int sum=0;
	int day=0;
	int i=0;
	while(day<k){
		i++;
		for(int j=1;j<=i&&day<k;j++){
			day++;
			sum+=i;
		}
	}
	cout << sum;
	return 0;
}