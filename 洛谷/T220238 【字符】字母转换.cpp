#include<bits/stdc++.h>
using namespace std;

int main(){
	char a ;
	cin>>a;
	if(a>='A'&&a<='Z'){
		cout<<char(a+32);
	}else if(a>='a'&&a<='z'){
		cout<<char(a-32);
	}else{
		cout<<a;
	}
	return 0;
}

