#include <iostream>
#include <cstring>

using namespace std;

int main(){
	int n=0;
	string s;
	string a="";
	cin >> n >> s;
	for(int i=0;i<s.length();i++){
		char temp=char((s[i]+n-'a')%26+'a');//注意char类型最大值为127，注意溢出
		a+=temp;
	}
	cout << a;
	return 0;
}