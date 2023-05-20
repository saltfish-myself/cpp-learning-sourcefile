#include<bits/stdc++.h>
using namespace std;

int w[100010],v[100010],idx = 0,dp[40010];
int main(){
	int m,n;
	cin>>n>>m;
	for(int i = 1;i<=n;i++){
	int x,y,z;
	cin>>y>>x>>z;
	for(int j = 1;j<=z;j<<=1){
		w[++idx] = j*x;
		v[idx] = j*y;
		z-=j;
	}
	if(z>0){
		w[++idx] = z*x;
		v[idx] = z*y;
	}
}
	for(int i = 1;i<=idx;i++){
		for(int j = m;j>=w[i];j--){
			dp[j] = max(dp[j],v[i]+dp[j-w[i]]);
		}
	}
	cout<<dp[m];
	return 0;
}

