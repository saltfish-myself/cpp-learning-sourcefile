#include<bits/stdc++.h>
using namespace std;

int w[10010],v[10010],dp[10010][10010];

int main(){
	int m,n;
	cin>>m>>n;
	for(int i = 1;i<=n;i++){
		cin>>w[i]>>v[i];
	}
	for(int i = 1;i<=n;i++){
		for(int j = 1;j<=m;j++){
			if(j>=w[i]){
				dp[i][j] = max(dp[i-1][j],v[i]+dp[i-1][j-w[i]]);
			}else{
				dp[i][j] = dp[i-1][j];
			}
		}
	}
	cout<<dp[n][m]; 
	return 0;
}
