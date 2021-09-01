#include <iostream>
#include <cstring>

using namespace std;

int main(){
	string s;
	cin >> s;
	int n=s.length();
	for(int i=1;i<n;i++){
		string temp;
		cin >> temp;
		s+=temp;

	}
	cout << n << " ";
	int sum=0;
	if(s[0]=='1'){
		sum=1;
		cout << 0 << " ";
	}
	int index=0;
	for(int i=0;i<n*n-1;i++){
		if(sum==0){
			if(s[i+1]!='0'){
				cout << index+1 << " ";
				index=0;
				sum=1;
			}else{
				index++;
			}
		}else{
			if(s[i+1]!='1'){
				cout << index+1 << " ";
				index=0;
				sum=0;
			}else{
				index++;
			}
		}
	}
	cout << index+1;
	return 0;
}
