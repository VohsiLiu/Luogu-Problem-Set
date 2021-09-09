#include <iostream>

using namespace std;

bool isLeapYear(int n){
	if(n%4==0&&n%100!=0){
		return true;
	}
	if(n%400==0){
		return true;
	}
	return false;
}


int main(){
	int x,y;
	cin >> x >> y;
	int count=0;
	int ans[1500]={0};
	for(int i=x;i<=y;i++){
		if(isLeapYear(i)){			
			ans[count]=i;
			count++;
		}
	}
	cout << count << endl;
	for(int i=0;i<count;i++){
		cout << ans[i] << " ";
	}
	return 0;
}