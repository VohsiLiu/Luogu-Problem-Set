#include <iostream>

using namespace std;

int main(){
	int n=0;
	cin >> n;
	for(int x=100;x>=1;x--){
		for(int k=1;k<150;k++){
			if(364*x+1092*k==n){
				cout << x << endl << k;
				goto loop; 
			}
		}
	}
loop:	return 0;
}