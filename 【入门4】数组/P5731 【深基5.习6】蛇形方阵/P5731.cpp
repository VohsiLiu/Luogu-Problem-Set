#include <iostream>
#include <cstring>
using namespace std;

void add(string *n){
	if((*n).length()==1){
		*n="  "+*n;
	}
	if((*n).length()==2){
		*n=" "+*n;
	}
}

int main(){
	int n=0;
	cin >> n;
	int a[n][n]={0};
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){

		}
	}
	return 0;
}