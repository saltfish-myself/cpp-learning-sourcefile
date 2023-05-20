#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if(a<b) swap(a,b);
	if(a<c) swap(a,c);
	if(b+c>a) 
	{
		if(a == b && b == c) cout<<"aaa";
		else if(a==b||a==c||b==c) cout<<"aab";
		else cout<<"abc";
	}
	else 
	{
		cout<<"error";
	}
}
