#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if((((a+b)>c&&c>abs(a-b))&&((c+b)>a&&a>abs(c-b))&&((a+c)>b&&b>abs(a-c)))){
		cout<<"yes";
	}else{
		cout<<"no";
	}
}
