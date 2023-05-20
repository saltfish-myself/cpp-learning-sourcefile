#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if((((a+b)>c&&c>abs(a-b))&&((c+b)>a&&a>abs(c-b))&&((a+c)>b&&b>abs(a-c)))){
		if(a == b && b == c){
			cout<<"aaa";
		}else if(a == b || a == c || b == c){
			cout<<"aab";
		}else{
			cout<<"abc";
		}
	}else{
		cout<<"error";
	}
}
