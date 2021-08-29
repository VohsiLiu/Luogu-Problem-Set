#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int n=0;
	cin >> n;
	bool x[2000001];
	memset(x,false,sizeof(x));
	for(int i=0;i<n;i++){
		double a=0.0;
		double t=0.0;
		cin >> a >> t;
		for(double j=1.0;j<=t;j++){
			if(x[int(j*a)]==false){
				x[int(j*a)]=true;
			}else{
				x[int(j*a)]=false;
			}
		}
	}
	for(int i=1;i<=2000001;i++){
		if(x[i]==true){
			cout << i;
			break;
		}
	}
	return 0;
}