#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

string del_zero(string s){
	int x=-1;
	for(int i=0;i<s.length();i++){
		if(s[i]!='0'){
			x=i;
			break;
		}
	}
	if(x==-1){
		return "0";
	}	
	return s.substr(x,s.length()-x);
}

string add_zero(string s){
	if(s.length()==1){
		return "0"+s;
	}
	return s;
}

int main(){
	map<string,int> p;
	p["one"]=1;p["two"]=2;p["three"]=3;p["four"]=4;p["five"]=5;
	p["six"]=6;p["seven"]=7;p["eight"]=8;p["nine"]=9;p["ten"]=10;
	p["eleven"]=11;p["twelve"]=12;p["thirteen"]=13;p["fourteen"]=14;
	p["fifteen"]=15;p["sixteen"]=16;p["seventeen"]=17;p["eighteen"]=18;
	p["nineteen"]=19;p["twenty"]=20;p["a"]=1;p["both"]=2;p["another"]=1;
	p["first"]=1;p["second"]=2;p["third"]=3;
	int ans[6]={0};
	for(int i=0;i<6;i++){
		string temp;
		cin >> temp;
		if(p.count(temp)){
			ans[i]=(p[temp]*p[temp])%100;
		}
	}
	sort(ans,ans+6);
	string x="";
	for(int i=0;i<6;i++){
		if(ans[i]<10){
			x+=add_zero(to_string(ans[i]));
		}else{
			x+=to_string(ans[i]);
		}
	}
	cout << del_zero(x);	
	return 0;
}