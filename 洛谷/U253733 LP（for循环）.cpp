#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,a,b,c = 0;
	cin>>n;
	for(int i = 1;i<=n;i++){
		cin>>a>>b;
		c  = a - b + c;
	}
	cout<<c;
	return 0;
}
