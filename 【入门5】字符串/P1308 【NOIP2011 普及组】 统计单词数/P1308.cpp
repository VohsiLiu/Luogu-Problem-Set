#include <iostream>
#include<algorithm>
using namespace std;

int main(){
	string s;
	string line;
	getline(cin,s);
	getline(cin,line);
	transform(s.begin(), s.end(), s.begin(), ::tolower); 
	transform(line.begin(), line.end(), line.begin(), ::tolower); 
	int begin=0;
	int end=0;
	int count=0;
	int local=0;
	for(int i=0;i<line.length();i++){
		if(line[i]==' '){
			end=i;
			string temp=line.substr(begin,end-begin);
			if(s==temp){
				if(count==0){
					local=i-s.length();
				}
				count++;
			}
			begin=end+1;
		}
	}
	if(count==0){
		cout << -1;
	}else{
		cout << count << " " << local;
	}
	return 0;
}