#include<bits/stdc++.h>
using namespace std;
int dx[4] = {0,1,0,-1},dy[4] = {1,0,-1,0},v[50][50],n,m;
string ans = "NO";
char ma[50][50];
void dfs(int x,int y){
	v[x][y] = 1;
	if(x==n&&y==m){
		ans = "YES";
		return;
	}
	for(int i = 0;i<4;i++){
		int nx = x+dx[i],ny = y+dy[i];
		if(nx>=1&&nx<=n&&ny>=1&&ny<=m&&ma[nx][ny]!='#'&&v[nx][ny]==0){
			dfs(nx,ny);
		}
	}
}
int main(){
	cin>>n>>m;
	for(int i = 1;i<=n;i++){
		for(int j = 1;j<=m;j++){
			cin>>ma[i][j];
		}
	}
	dfs(1,1);
	cout<<ans;
	return 0;
}
