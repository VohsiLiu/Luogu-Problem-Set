#include <iostream>

using namespace std;

int main(){
	string a,b;
	cin >> a >> b;
	long long int an=1,bn=1;
	for(int i=0;i<a.length();i++){
		an*=int(a[i]-'A'+1);
	}	
	for(int i=0;i<b.length();i++){
		bn*=int(b[i]-'A'+1);
	}
	if(an%47==bn%47){
		cout << "GO";
	}else{
		cout << "STAY";
	}
	return 0;
}