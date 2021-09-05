#include <iostream>
#include <string>
using namespace std;

	int main(){
	int n=0;
	cin >> n;
	string s[n][3];
	for(int i=0;i<n;i++){
		string a;
		string b;
		cin >> a >> b;
		if(a=="a"||a=="b"||a=="c"){
			string c;
			cin >> c;
			s[i][0]=a;
			s[i][1]=b;
			s[i][2]=c;
		}else{
			s[i][0]=s[i-1][0];
			s[i][1]=a;
			s[i][2]=b;
		}
	}	
	for(int i=0;i<n;i++){
		string ans="";
		int temp=0;
		if(s[i][0]=="a"){
			ans=s[i][1]+"+"+s[i][2]+"=";
			temp=stoi(s[i][1])+stoi(s[i][2]);
			ans+=to_string(temp);
			cout << ans << endl << ans.length() << endl;
		}
		if(s[i][0]=="b"){
			ans=s[i][1]+"-"+s[i][2]+"=";
			temp=stoi(s[i][1])-stoi(s[i][2]);
			ans+=to_string(temp);
			cout << ans << endl << ans.length() << endl;
		}
		if(s[i][0]=="c"){
			ans=s[i][1]+"*"+s[i][2]+"=";
			temp=stoi(s[i][1])*stoi(s[i][2]);
			ans+=to_string(temp);
			cout << ans << endl << ans.length() << endl;
		}
	}
	return 0;
}