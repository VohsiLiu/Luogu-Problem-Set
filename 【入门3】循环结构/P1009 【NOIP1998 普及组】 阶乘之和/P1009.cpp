#include <iostream>
#include <cstring>

using namespace std;

void moveFrontZero(string &a){//去除一个字符串的前导0
	a.erase(0,a.find_first_not_of('0'));
	if(a.empty()){
        a = "0";
    }
}

void align(string &a, string &b){//让两个字符串变成相同的长度，长度小的补0
	int a_size = a.size();
	int b_size = b.size();
	if(a_size < b_size){
		for(int i = 1; i <= b_size - a_size; i++){
			a = "0" + a;
		}
	}else{
		for(int i = 1; i <= a_size-b_size; i++){
			b = "0" + b;
		}
	}
}

string add(string addent, string adder){
	moveFrontZero(addent);
	moveFrontZero(adder);
	string answer = "";
	align(addent,adder);
	int temp = 0, carry = 0;//temp表示当前对位相加结果，carry表示进位
	for(int i = addent.size() - 1; i >= 0; i--){
		temp = addent[i] - '0' + adder[i] - '0' + carry;
		carry = temp/10;
		temp %= 10;
		answer = (char)(temp + '0') + answer;
	}
	if(carry){//处理最高位相加可能产生的进位
        answer = (char)(carry + '0') + answer;
    }
	moveFrontZero(answer);
	return answer;
}

string mul(string multiplicand, string multiplier){
    //multiplicand表示被乘数，即上面例子中的12345，multiplier是乘数，即上面例子的24
    string answer = "0";//answer必须初始化为“0”
    for (int i = (int) multiplier.length() - 1; i >= 0 ; i--) {
        for (char c = '1'; c <= multiplier[i]; c++) {
            answer = add(answer, multiplicand);
        }
        multiplicand = multiplicand + "0";
    }
    moveFrontZero(answer);
	return answer;
}


string factorial(string a){//高精度阶乘（最大可运行出10000左右的阶乘）
    moveFrontZero(a);
	if(a == "1"){
		return a;
    }
	else 
		return mul(a,factorial(to_string((stoi(a)-1))));//即利用递归转化为a*(a-1)!
}

int main(){
	int k =0;
	cin >> k;
	string a[k];
	for (int i=0;i<k;i++){
		a[i]=factorial(to_string(i+1));
	}
	string sum ="0";
	for (int i=0;i<k;i++){
		sum=add(a[i],sum);
	}
	cout << sum;
	return 0;
}