#include<bits/stdc++.h>
using namespace std;

int l[1010],v[1010],dp[10010][10010];//l:time,v:value
int main(){
	int t,m;
	cin>>t>>m;
	for(int i = 1;i<=m;i++){
		cin>>l[i]>>v[i];
	}
	for(int i = 1;i<=m;i++){
		for(int j = 1;i<=t;j++){
			if(j>=l[i]){
				dp[i][j] = max(dp[i-1][j],v[i]+dp[i-1][j-l[i]]);
			}else{
				dp[i][j] = dp[i-1][j];
			}
		}
	}
	cout<<dp[t][m]; 
	return 0;
}
