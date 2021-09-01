#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n=0;
	cin >> n;
	int a[1000]={0};
	int index=0;
	int x=0;
	for(int i=0;x<n*n;i++){
		cin >> a[i];
		x+=a[i];
		index++;
	}
	int count=1;
	int sum=0;
	int ans[n*n]={0};
	for(int i=0;i<index;i++){
		if(count%2==1){
			fill(ans+sum,ans+sum+a[i],0);
			count++;
			sum+=a[i];
		}else{
			fill(ans+sum,ans+sum+a[i],1);
			count++;
			sum+=a[i];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(j!=n-1){
				cout << ans[n*i+j];
			}else{
				cout << ans[n*i+j] << endl;
			}
		}
	}
	return 0;
}