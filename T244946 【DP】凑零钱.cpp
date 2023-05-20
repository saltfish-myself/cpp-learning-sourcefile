#include<bits/stdc++.h>
using namespace std;

int dp[100010];
int main(){
	int n;
	cin>>n;
	for(int i = 1;i<=n;i++){
		if(i<5) dp[i] = dp[i-1] + 1;
		else if(i<11) dp[i] = min(dp[i-1],dp[i-5])+1;
		else dp[i] = min(dp[i-5],min(dp[i-1],dp[i-11])) + 1;
	}
	cout<<dp[n];
	return 0;
}
