#include<bits/stdc++.h>
using namespace std;

int main(){
	char a;
	cin>>a;
	if(a>='a'&&a<='z'){
		cout<<"Lowercase letter";
	}else if(a>='A'&&a<='Z'){
		cout<<"Capital letter";
	}else if(a>='0'&&a<='9'){
		cout<<"Digital";
	}
	return 0;
}
