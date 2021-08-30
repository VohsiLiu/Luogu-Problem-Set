#include <iostream>
#include <cstring>

using namespace std;

int main(){
	char zero[5][3]={'X','X','X',
					'X','.','X',
					'X','.','X',
					'X','.','X',
					'X','X','X'};
	char one[5][3]={'.','.','X',
					'.','.','X',
					'.','.','X',
					'.','.','X',
					'.','.','X',};
	char two[5][3]={'X','X','X',
					'.','.','X',
					'X','X','X',
					'X','.','.',
					'X','X','X'};
	char three[5][3]={'X','X','X',
					 '.','.','X',
					 'X','X','X',
					 '.','.','X',
					 'X','X','X'};
	char four[5][3]={'X','.','X',
					 'X','.','X',
					 'X','X','X',
					 '.','.','X',
					 '.','.','X'};
	char five[5][3]={'X','X','X',
					 'X','.','.',
					 'X','X','X',
					 '.','.','X',
					 'X','X','X'};
	char six[5][3]={'X','X','X',
					'X','.','.',
					'X','X','X',
					'X','.','X',
					'X','X','X'};
	char seven[5][3]={'X','X','X',
					  '.','.','X',
					  '.','.','X',
					  '.','.','X',
					  '.','.','X'};
	char eight[5][3]={'X','X','X',
					  'X','.','X',
					  'X','X','X',
					  'X','.','X',
					  'X','X','X'};
	char nine[5][3]={'X','X','X',
					 'X','.','X',
					 'X','X','X',
					 '.','.','X',
					 'X','X','X'};
	int n=0;
	cin >> n;
	string x;
	cin >> x;
	char ans[5][4*n];
	int j=0;
	for(int i=0;i<n;i++){	
		if(x[i]=='0'){
			for(int a=0;a<5;a++){
				ans[a][j]=zero[a][0];
				ans[a][j+1]=zero[a][1];
				ans[a][j+2]=zero[a][2];
				ans[a][j+3]='.';
			}
		}else if(x[i]=='1'){
			for(int a=0;a<5;a++){
				ans[a][j]=one[a][0];
				ans[a][j+1]=one[a][1];
				ans[a][j+2]=one[a][2];
					ans[a][j+3]='.';
			}
		}else if(x[i]=='2'){
			for(int a=0;a<5;a++){
				ans[a][j]=two[a][0];
				ans[a][j+1]=two[a][1];
				ans[a][j+2]=two[a][2];
				ans[a][j+3]='.';
			}
		}else if(x[i]=='3'){
			for(int a=0;a<5;a++){
				ans[a][j]=three[a][0];
				ans[a][j+1]=three[a][1];
				ans[a][j+2]=three[a][2];
				ans[a][j+3]='.';
			}
		}else if(x[i]=='4'){
			for(int a=0;a<5;a++){
				ans[a][j]=four[a][0];
				ans[a][j+1]=four[a][1];
				ans[a][j+2]=four[a][2];
				ans[a][j+3]='.';
			}
		}else if(x[i]=='5'){
			for(int a=0;a<5;a++){
				ans[a][j]=five[a][0];
				ans[a][j+1]=five[a][1];
				ans[a][j+2]=five[a][2];
				ans[a][j+3]='.';
			}
		}else if(x[i]=='6'){
			for(int a=0;a<5;a++){
				ans[a][j]=six[a][0];
				ans[a][j+1]=six[a][1];
				ans[a][j+2]=six[a][2];
				ans[a][j+3]='.';
			}
		}else if(x[i]=='7'){
			for(int a=0;a<5;a++){
				ans[a][j]=seven[a][0];
				ans[a][j+1]=seven[a][1];
				ans[a][j+2]=seven[a][2];
				ans[a][j+3]='.';
			}
		}else if(x[i]=='8'){
			for(int a=0;a<5;a++){
				ans[a][j]=eight[a][0];
				ans[a][j+1]=eight[a][1];
				ans[a][j+2]=eight[a][2];
				ans[a][j+3]='.';
			}
		}else if(x[i]=='9'){
			for(int a=0;a<5;a++){
				ans[a][j]=nine[a][0];
				ans[a][j+1]=nine[a][1];
				ans[a][j+2]=nine[a][2];
				ans[a][j+3]='.';
			}
		}
		j+=4;
	}
	for(int i=0;i<5;i++){
		for(int j=0;j<4*n-1;j++){
			cout << ans[i][j];
			if(j==4*n-2){
				cout << "\n";
			}
		}
	}
	return 0;
}
