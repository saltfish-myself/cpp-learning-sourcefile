#include<bits/stdc++.h>
using namespace std;

long long n,m;
long long a[10010] = {0,1,2,4};
int main(){
	int n,x;
	cin>>x;
	for(int j = 0;j<x;j++){
		cin>>n;
		for(int i = 4;i<=n;i++){
			a[i] = a[i-1]+a[i-2]+a[i-3];
		}
		cout<<a[n]<<endl;
	}
	return 0;
}
