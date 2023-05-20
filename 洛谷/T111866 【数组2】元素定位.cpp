#include<bits/stdc++.h>

using namespace std;
int main(){
	int l,s;//分别为行和列 
	cin>>l>>s;
	int a[110][110];
	for(int i = 1;i<=l;i++){
		for(int j = 1;j<=s;j++){
			cin>>a[i][j];
		}
	}
	int x,y;//分别为需要查找的行和列 
	cin>>x>>y;
	cout<<a[x][y];
}
