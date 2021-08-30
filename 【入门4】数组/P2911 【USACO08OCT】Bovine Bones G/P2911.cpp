#include <iostream>

using namespace std;

int main(){
	int s1,s2,s3=0;
	cin >> s1 >> s2 >> s3;
	int flag[10001]={0};
	int index=0;
	for (int i=1;i<=s1;i++){
		for (int j=1;j<=s2;j++){
			for (int k=1;k<=s3;k++){
				flag[i+j+k]++;
			}
		}
	}
	int max=0;
	int count=0;
	for(int i=3;i<=s1+s2+s3;i++){
		if(flag[i]>count){
			count=flag[i];
			max=i;
		}
	}
	cout << max;
	return 0;
}