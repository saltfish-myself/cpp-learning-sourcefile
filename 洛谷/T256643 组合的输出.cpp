#include<bits/stdc++.h>
using namespace std;

int n,m,vis[110],ans[110];

void dfs(int t,int pre){
	if(t==m+1){
		for(int i = 1;i<=m;i++){
			printf("%3d",ans[i]);
		}
		cout<<endl;
		return;
	}
	for(int i = pre+1;i<=n;i++){
		if(vis[i]){
			continue;
		}
		vis[i] = 1;
		ans[t] = i;
		dfs(t+1,i);
		vis[i] = 0;
	}
}
int main(){
	cin>>n>>m;
	dfs(1,0);
	return 0;
}
