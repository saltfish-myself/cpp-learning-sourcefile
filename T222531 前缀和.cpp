#include<bits/stdc++.h>
using namespace std;
long long a[100000],k1[100000],k2[100000],sum[100000];
int main(){
	long long n,m,x;
	cin>>n>>m;
	for(int i = 1;i<=n;++i){
		cin>>a[i];
		sum[i] = a[i] + sum[i - 1]; 
	}
	for(int i = 1;i<=m;i++){
		cin>>k1[i]>>k2[i];
	}
	for(int i = 1;i<=m;++i){
	x = sum[k2[i]] - sum[k1[i] - 1];
		cout<<x<<endl;
	}
	return 0;
}
