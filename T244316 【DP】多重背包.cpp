#include<bits/stdc++.h>
using namespace std;

int w[1000010],v[1000010],idx = 0,dp[1010];

int main(){
	int m,n;
	cin>>m>>n;
	for(int i = 1;i<=n;i++){
		int x,y,z;
		cin>>x>>y>>z;
		for(int j = 1;j<=z;j++){
			w[++idx] = x;
			v[idx] = y;
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
