#include<bits/stdc++.h>
using namespace std;

int n,vis[100],ans[110];

void dfs(int t){
	if(t==n+1){
		for(int i = 1;i<=n;i++)
			printf("%5d",ans[i]);
		cout<<endl;
		return;
	}
	for(int i = 1;i<=n;i++){
		if(vis[i])
			continue;
		vis[i] = 1;
		ans[t] = i;
		dfs(t+1);
		vis[i] = 0;
	}
}
int main(){
	cin>>n;
	dfs(1);
	return 0;
}
