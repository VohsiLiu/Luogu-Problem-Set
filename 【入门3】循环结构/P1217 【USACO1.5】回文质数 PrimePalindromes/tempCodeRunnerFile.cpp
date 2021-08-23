bool palindromes(int n){
	string s=to_string(n);
	for(int i=0;i<s.length();i++){
		if(s[i]!=s[s.length()-1-i]){
			return false;
			break;
		}
	}
	return true;
}

bool prime(int n){
	for (int i=2;i*i<=n;i++){
		if(n%i==0){
			return false;
			break;
		}
	}
	return true;
}
