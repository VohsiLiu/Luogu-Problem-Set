#include <iostream>

using namespace std;

int main(){
	int x=0;
	cin >> x;
	int ans=1;
	for(int i=0;i<x-1;i++){
		ans=(ans+1)*2;
	}
	cout << ans;
	return 0;
}