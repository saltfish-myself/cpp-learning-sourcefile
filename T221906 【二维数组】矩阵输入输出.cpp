#include<bits/stdc++.h>

using namespace std;
int main(){
	int l,s;//分别为行和列 
	cin>>l>>s;
	int a[l+1][s+1];
	for(int i = 1;i<=l;i++){
		for(int j = 1;j<=s;j++){
			cin>>a[i][j];
		}
	}
	for(int i = 1;i<=l;i++){
		for(int j = 1;j<=s;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
