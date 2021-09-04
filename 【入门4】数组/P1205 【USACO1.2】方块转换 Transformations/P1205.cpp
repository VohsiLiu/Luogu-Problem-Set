#include <iostream>

using namespace std;
//前一个是操作前，后一个存储操作后得到的
void rorate(int n,char a[10][10],char b[10][10]){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			b[j][n-i-1]=a[i][j];
		}
	}
}

void reflex(int n,char a[10][10],char b[10][10]){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			b[i][n-1-j]=a[i][j];
		}
	}
}

bool equal(int n,char a[10][10],char b[10][10]){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]!=b[i][j]){
				return false;
			}
		}
	}
	return true;
}

int main(){
	int n=0;
	cin >> n;
	char first[10][10]={};
	char final[10][10]={};
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			char temp;
			cin >> temp;
			first[i][j]=temp;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			char temp;
			cin >> temp;
			final[i][j]=temp;
		}
	}
	char a[10][10]={};
	char b[10][10]={};
	char c[10][10]={};
	char re[10][10]={};
	char rea[10][10]={};
	char reb[10][10]={};
	char rec[10][10]={};
	reflex(n,first,re);
	rorate(n,first,a);
	rorate(n,a,b);
	rorate(n,b,c);
	rorate(n,re,rea);
	rorate(n,rea,reb);
	rorate(n,reb,rec);
	if(equal(n,a,final)){
		cout << 1;
	}else if(equal(n,b,final)){
		cout << 2;
	}else if(equal(n,c,final)){
		cout << 3;
	}else if(equal(n,re,final)){
		cout << 4;
	}else if(equal(n,rea,final)||equal(n,reb,final)||equal(n,rec,final)){
		cout << 5;
	}else if(equal(n,first,final)){
		cout << 6;
	}else{
		cout << 7;
	}

	return 0;
}