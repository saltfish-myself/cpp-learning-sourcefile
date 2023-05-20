#include<bits/stdc++.h>
using namespace std;

long long n,m;
long long a[10010] = {0,1,1};
int main(){
	int x,n;
	cin>>x;
	for(int j = 0;j<x;j++){
		cin>>n;
		for(int i = 3;i<=n;i++){
			a[i] = a[i-1]+a[i-2];
		}
		cout<<a[n]<<endl;
	}
	return 0;
}
