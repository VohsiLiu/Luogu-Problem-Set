#include <iostream>

using namespace std;

int main(){
	int a[26]={1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4};
	string s;
	getline(cin,s);
	int sum=0;
	for(int i=0;i<s.length();i++){
		if(s[i]==' '){
			sum++;
		}else{
			sum+=a[int (s[i]-'a')];
		}
	}
	cout << sum;
	return 0;
}