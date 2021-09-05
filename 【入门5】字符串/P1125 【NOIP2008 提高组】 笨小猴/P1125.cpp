#include <iostream>
#include <cstring>

using namespace std;

bool isPrime(int n){
	if(n==0||n==1){
		return false;
	}
	for(int i=2;i*i<n;i++){
		if(n%i==0){
			return false;
			break;
		}
	}
	return true;
}

int main(){
	string s;
	cin >> s;
	int a[26]={0};
	for(int i=0;i<s.length();i++){
		a[int(s[i]-'a')]++;
	}
	int max=0,min=100;
	for(int i=0;i<26;i++){
		if(a[i]>max){
			max=a[i];
		}
		if(a[i]<min&&a[i]!=0){
			min=a[i];
		}
	}
	int sub=max-min;
	if(isPrime(sub)){
		cout << "Lucky Word" << endl << sub;
	}else{
		cout << "No Answer" << endl << 0;
	}
	return 0;
}