#include<bits/stdc++.h>

using namespace std;
int main(){
	int l,s;//分别为行和列 
	cin>>l>>s;
	int a[l][s],b[l][s],t[l][s];
	for(int i = 0;i<l;i++){
		for(int j = 0;j<s;j++){
			cin>>a[i][j];
		}
	}
	for(int i = 0;i<l;i++){
		for(int j = 0;j<s;j++){
			cin>>b[i][j];
		}
	}
	for(int i = 0;i<l;i++){
		for(int j = 0;j<s;j++){
			t[i][j]=a[i][j]+b[i][j];
		}
	}
	for(int i = 0;i<l;i++){
		for(int j = 0;j<s;j++){
			cout<<t[i][j]<<" ";
		}
		cout<<endl;
	}
}
