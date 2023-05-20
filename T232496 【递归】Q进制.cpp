#include<bits/stdc++.h>
using namespace std;

void f(int n,int y){
	if(n==0) return;
	f(n/y,y);
	cout<<n%y;
}

int main(){
	int x,q;
	cin>>x>>q;
	f(x,q);
	return 0;
}
