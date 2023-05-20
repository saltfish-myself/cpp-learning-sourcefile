#include<bits/stdc++.h>
using namespace std;

int main(){
	stack<int> k,j,o;
	int a[1000],b[1000][1000];
	int n,m,x;
	cin>>n>>m;
	for(int i = 0;i<=n;i++){
		cin>>x;
		k.push(x);
	}
	for(int i = 0;i<=n;i++){
		x = k.top();
		k.pop();
		a[i] = x;
	}
	for(int j = 0;j<=m;j++){
		for(int i = 0;i<=n;i++){
			cin>>x;
			b[j][i] = x;
		}
	}
	for(int j = 0;j<=m;j++){
		for(int i = 0;i<=n;i++){
			if(b[j][i] == a[i]){
				cout<<"Yes";
			}else{
				cout<<"No";
				break;
			}
			b[j][i] = x;
		}
	}
	return 0;
}
