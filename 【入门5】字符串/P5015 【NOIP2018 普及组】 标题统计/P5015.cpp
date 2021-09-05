#include <iostream>
#include <cstring>

using namespace std;

int main(){
	string s;
	getline(cin,s);
	int a=s.length();
	for(int i=0;i<a;i++){
		if(s[i]==' '){
			a--;
		}
	}
	cout << a;
	return 0;
}