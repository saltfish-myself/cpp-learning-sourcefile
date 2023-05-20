#include<bits/stdc++.h>
using namespace std;
bitset<500005> dp;

int main(){
	int n,m,i,j,a,k,l;
	cin>>n>>m;
	dp[0]=1;
	for(i=0;i<n;i++)
	{
		cin>>k>>a;
		for(l=1;a>=l;l*=2){
			dp|=dp<<l*k;
			a-=l;
		}
		if(a*k){
			dp|=dp<<a*k;
		}	
	}
	while(m--){
		cin>>k;
		puts(dp[k]?"Yes":"No");
	}
	return 0;
}
