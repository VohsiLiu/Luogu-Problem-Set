#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
	int x,y;
	cin >> x >> y;
	int score[x][y];
	int max_and_min[x][2];
	int max=0;
	int min=10;
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			int temp=0;
			cin >> temp;
			score[i][j]=temp;
			if(temp>max){
				max=temp;
			}
			if(temp<min){
				min=temp;
			}
			if(j==y-1){
				max_and_min[i][0]=max;
				max_and_min[i][1]=min;
				max=0;
				min=10;
			}
		}
	}
	double ans=0.0;
	double sum[x];
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			ans+=score[i][j]*1.0;
			if(j==y-1){
				ans-=(max_and_min[i][0]+max_and_min[i][1])*1.0;
				sum[i]=ans;
				ans=0.0;
			}
		}
	}
	printf("%.2f",*max_element(sum,sum+x)/((y-2)*1.0));
	return 0;
}