#include <iostream>

using namespace std;

int main(){
	string s;
	cin >> s;
	int boy=0;
	int girl=0;
	for(int i=0;i<s.length()-2;i++){
		if(s[i]=='b'||s[i+1]=='o'||s[i+2]=='y'){
			boy++;
		}
	}
	for(int i=0;i<s.length()-3;i++){
		if(s[i]=='g'||s[i+1]=='i'||s[i+2]=='r'||s[i+3]=='l'){
			girl++;
		}
	}
	cout << boy << endl << girl; 
	return 0;
}
