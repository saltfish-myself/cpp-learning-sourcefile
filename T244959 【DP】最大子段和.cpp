#include<bits/stdc++.h>
using namespace std;

long long dp[1000010],a[1000010];
int main(){
	int n;
	cin>>n;
	for(int i = 1;i<=n;i++) cin>>a[i];
	long long mx = a[1];
	for(int i = 1;i<=n;i++){
		dp[i] = max(dp[i-1]+a[i],a[i]);
		mx = max(mx,dp[i]);
	}
	cout<<mx;
	return 0;
}
