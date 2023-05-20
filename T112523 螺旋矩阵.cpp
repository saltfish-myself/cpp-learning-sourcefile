#include<bits/stdc++.h>
using namespace std;
int a[100][100];
int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};
int main(){
	int n;
	cin>>n;
	int x = 1,y = 1;
	a[1][1] = 1;
	int c = 0;
	int t = 1;
	while(t<n*n){
		int nx = x + dx[c];//nx为下一步的x
		int ny = y + dy[c];//同上
		if(nx >= 1 && nx <= n && ny <= n && ny >= 1 &&! a[nx][ny]){
			x = nx,y = ny;
			a[x][y] = ++t;
		}else{
			c++;
		}
		c%=4;
	}
	for(int i = 1;i<=n;i++){
		for(int j = 1;j<=n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
} 
