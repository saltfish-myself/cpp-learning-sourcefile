#include<bits/stdc++.h>
using namespace std;

long long w[20010],v[20010],dp[10000010];
int main(){
	long long m,n;
	cin>>m>>n;
	for(int i = 1;i<=n;i++){
		cin>>w[i]>>v[i];
	}
	for(int i = 1;i<=n;i++){
		for(int j = w[i];j<=m;j++){
			dp[j] = max(dp[j],v[i]+dp[j-w[i]]);
		}
	}
	cout<<dp[m];
	return 0;
}
