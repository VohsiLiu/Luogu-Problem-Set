#include <iostream>
#include <string>
using namespace std;

int main(){
	string s;
	cin >> s;
	int begin=0;
	int end=0;
	int a=0,b=0,c=0;
	for(int i=0;i<s.length();i++){
		if(s[i]==';'){
			end=i;
			string x=s.substr(begin,4);
			if(x[0]=='a'){
				if(x[x.length()-1]>='0'&&x[x.length()-1]<='9'){
					a=int(x[x.length()-1]-'0');
				}
				if(x[x.length()-1]=='a'){
					a=a;
				}
				if(x[x.length()-1]=='b'){
					a=b;
				}
				if(x[x.length()-1]=='c'){
					a=c;
				}
			}
			if(x[0]=='b'){
				if(x[x.length()-1]>='0'&&x[x.length()-1]<='9'){
					b=int(x[x.length()-1]-'0');
				}
				if(x[x.length()-1]=='a'){
					b=a;
				}
				if(x[x.length()-1]=='b'){
					b=b;
				}
				if(x[x.length()-1]=='c'){
					b=c;
				}
			}
			if(x[0]=='c'){
				if(x[x.length()-1]>='0'&&x[x.length()-1]<='9'){
					c=int(x[x.length()-1]-'0');
				}
				if(x[x.length()-1]=='a'){
					c=a;
				}
				if(x[x.length()-1]=='b'){
					c=b;
				}
				if(x[x.length()-1]=='c'){
					c=c;
				}
			}
			begin=end+1;
		}
	}
	cout << a << " " << b << " " << c;
	return 0;
}