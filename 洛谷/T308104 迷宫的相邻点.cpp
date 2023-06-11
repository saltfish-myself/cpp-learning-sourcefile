#include<bits/stdc++.h>
using namespace std;

int dx[4] = {0,1,0,-1},dy[4] = {1,0,-1,0};

int main(){
	int n,m;
	cin>>n>>m;
	int x,y;
	cin>>x>>y;
	for(int i = 0;i<4;i++){
		int nx = x + dx[i],ny = y+dy[i];
		if(nx>=1&&ny>=1&&nx<=n&&ny<=m){
			cout<<nx<<" "<<ny<<endl;
		}
		else{
			cout<<"NA"<<endl;
		}
	}
	return 0;
}
