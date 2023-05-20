#include<bits/stdc++.h>

using namespace std;
int main(){
	int l,s,c;//分别为行和列 
	cin>>l>>s;
	int a[l][s];
	for(int i = 0;i<l;i++){
		for(int j = 0;j<s;j++){
			cin>>a[i][j];
			if(a[i][j]==1){
				c++;
			}
		}
	}
	cout<<c;
	return 0;
}
