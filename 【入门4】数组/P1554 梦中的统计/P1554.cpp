#include <iostream>
#include <cstring>
using namespace std;

void num(int * ans,string n){
	for(int i=0;i<n.length();i++){
		if(n[i]=='0'){
			ans[0]++;
		}
		if(n[i]=='1'){
			ans[1]++;
		}
		if(n[i]=='2'){
			ans[2]++;
		}
		if(n[i]=='3'){
			ans[3]++;
		}
		if(n[i]=='4'){
			ans[4]++;
		}
		if(n[i]=='5'){
			ans[5]++;
		}
		if(n[i]=='6'){
			ans[6]++;
		}
		if(n[i]=='7'){
			ans[7]++;
		}
		if(n[i]=='8'){
			ans[8]++;
		}
		if(n[i]=='9'){
			ans[9]++;
		}
	}
}


int main(){
	int ans[10]={0};
	long long int x,y;
	cin >> x >> y;
	for(long long int i=x;i<=y;i++){
		num(ans,to_string(i));
	}
	for(int i=0;i<10;i++){
		cout << ans[i] << " ";
	}
	return 0;
}