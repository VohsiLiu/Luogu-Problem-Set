#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>

using namespace std;

int main(){
	int n;
	string s;
	cin >> n >> s;
	for(int i=0;i<n;i++){
		int t;
		cin >> t;
		if(t==1){
			string x;
			cin >> x;
			s=s+x;
			cout << s << endl;
		}
		if(t==2){
			int begin;
			int len;
			cin >> begin >> len;
			s=s.substr(begin,len);
			cout << s << endl;
		}
		if(t==3){
			int a;
			string inse;
			cin >> a >> inse;
			string temp=s.substr(0,a);
			string temp2=s.substr(a,s.length()-a);
			s=temp+inse+temp2;
			cout << s << endl;
		}
		if(t==4){
			string fi;
			cin >> fi;
			if(s.find(fi)!=s.npos){
				cout << s.find(fi) << endl;
			}else{
				cout << -1 << endl;
			}
		}
	}
	return 0;
}