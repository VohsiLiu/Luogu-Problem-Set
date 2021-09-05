#include <iostream>
#include <string>
using namespace std;

string del_zero(string s){
	int not_zero=0;
	if(s[0]=='0'){
		for(int i=0;i<s.length();i++){
			if(s[i]!='0'){
				not_zero=i;
				break;
			}
		}
		return s.substr(not_zero,s.length());
	}
	return s;
}

int main(){
	string s;
	cin >> s;
	return 0;
}