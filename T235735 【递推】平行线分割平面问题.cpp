#include<bits/stdc++.h>
using namespace std;

long long f[10010] = {0,3,9};
int main (){
	int t;
	cin>>t;
	for(int i = 3; i<=t; i++) {
		f[i] = ((i-1)*2+1)*2+f[i-1];
	}
	cout<<f[t];
	return 0;
}
