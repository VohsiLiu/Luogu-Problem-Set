#include <iostream>

using namespace std;

int main(){
	int n=0;
	string s;
	cin >> n >> s;
	if(n%2==1&&n!=1){
		s=s.substr(0,n-1);
	}
	int ans=0;
	int more=0;
	for(int i=0;i<s.size()-1;i++){
		if((s[i]=='V'&&s[i+1]=='V')||(s[i]=='K'&&s[i+1]=='K')){
			more=1;
			break;
		}
	}
	for(int i=0;i<s.size()-1;i++){
		if(s[i]=='V'&&s[i+1]=='K'){
			ans++;
		}
	}
	cout << ans+more;
	return 0;
}