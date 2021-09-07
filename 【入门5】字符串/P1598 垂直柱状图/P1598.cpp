#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	string s="";
	string temp;
	for(int i=0;i<4;i++){
		getline(cin,temp);
		s+=temp;
	}
	int count[26]={0};
	for(int i=0;i<s.length();i++){
		if(s[i]>='A'&&s[i]<='Z'){
			count[s[i]-'A']++;
		}
	}
	int max=*max_element(count,count+26);
	string ans[max+1][26]={""};
	for(int i=0;i<26;i++){
		ans[max][i]=char('A'+i);
	}
	for(int i=0;i<26;i++){
		for(int j=0;j<max;j++){
			if(j+1<=count[i]){
				ans[max-j-1][i]='*';
			}else{
				ans[max-j-1][i]=" ";
			}
		}
	}
	for(int i=0;i<max+1;i++){
		for(int j=0;j<26;j++){
			if(j!=25){
				cout << ans[i][j] << " ";
			}else if(j==25&&i!=max){
				cout << ans[i][j] << endl;
			}else{
				cout << ans[i][j];
			}
			 
		}
	}

	return 0;
}

