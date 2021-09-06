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

string re_int(string s){
	string x=s;
	for(int i=0;i<s.length();i++){
		x[i]=s[s.length()-i-1];
	}
	return del_zero(x);
}

string re_decimal(string s,int local){
	string x1=s.substr(0,local);
	string x2=s.substr(local+1,s.length());
	if(x2=="0"){
		return del_zero(re_int(x1))+".0";
	}
	return del_zero(re_int(x1))+"."+re_int(del_zero(x2));
}

string re_frac(string s,int local){
	string x1=s.substr(0,local);
	string x2=s.substr(local+1,s.length());
	return del_zero(re_int(x1))+"/"+del_zero(re_int(x2));	
}

string re_percent(string s){
	string x=s.substr(0,s.length()-1);
	return del_zero(re_int(x))+"%";
}


int main(){
	string s;
	cin >> s;
	int x=0,local=0;;
	for(int i=0;i<s.length();i++){
		if(s[i]=='.'){
			x=1;
			local=i;
			break;
		}
		if(s[i]=='/'){
			x=2;
			local=i;
			break;
		}
		if(s[i]=='%'){
			x=3;
			local=i;
			break;
		}
	}
	if(x==0){
		cout << re_int(s);
	}
	if(x==1){
		cout << re_decimal(s,local);
	}
	if(x==2){
		cout << re_frac(s,local);
	}
	if(x==3){
		cout << re_percent(s);
	}
	return 0;
}