#include <iostream>
#include<vector>
#include<set>
using namespace std;

bool In(int x,int a[],int size){
	for(int i=0;i<size;i++){
		if(x==a[i]){
			return true;
			break;
		}
	}
	return false;
}

int main(){
	int n=0;
	cin >> n;
	int a[n]={0};
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	vector<int> arr;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			arr.push_back(a[i]+a[j]);
		}
	}
	set<int> s(arr.begin(),arr.end());
	int sum=0;
	for(set<int>::iterator it=s.begin() ;it!=s.end();it++){
		if(In(*it,a,n)){
			sum++;
		}
    }
	cout << sum;
	return 0;
}