#include<bits/stdc++.h>

using namespace std;
int main(){
	int l,s;//分别为行和列 
	cin>>l>>s;
	int a[110][110];
	for(int i = 0;i<l;i++){
		for(int j = 0;j<s;j++){
			cin>>a[i][j];
		}
	}
	for(int i = 0;i<s;i++){
		for(int j = l-1;j>=0;j--){
			cout<<a[j][i]<<" ";
		}
		if(i!=s-1){
			cout<<endl;
		}
	}
}
