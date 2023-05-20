#include<bits/stdc++.h>
using namespace std;

int f(int m,int n){
	if(m<0||n<=0) return 0;
	if(m==0) return 1;
	return f(m,n-1)+f(m-n,n);
}
int main(){
	int q;
	cin>>q;
	while(q--){
		int m,n;
		cin>>m>>n;
		cout<<f(m,n)<<endl;
	}
	return 0;
}
