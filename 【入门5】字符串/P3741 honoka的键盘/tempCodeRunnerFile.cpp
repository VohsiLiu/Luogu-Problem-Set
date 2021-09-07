#include <iostream>

using namespace std;

int main(){
	int n=0;
	string s;
	cin >> n >> s;
	int count=0;
	for(int i=0;i<s.length()-1;i++){
		if(s[i]=='V'&&s[i+1]=='K'){
			count++;
			s[i]=s[i+1]='X';
		}
	}
	for(int i=0;i<s.length()-1;i++){
		if((s[i]=='V'&&s[i+1]=='V')||(s[i]=='K'&&s[i+1]=='K')){
			count++;
			break;
		}
	}
	cout << count;
	return 0;
}