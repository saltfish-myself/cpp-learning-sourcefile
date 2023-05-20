#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m,x,t = 0;
	cin>>n>>m;
	int a[n][m];
	for(int i = 0;i<n;i++){
		for(int j = 0;j<m;j++){
			cin>>x;
			a[i][j] = x;
			if(x == 9){
				t++;
			}
		}
	}
	cout<<t<<endl;
	for(int i = 0;i<n;i++){
		for(int j = 0;j<m;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
