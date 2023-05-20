#include<bits/stdc++.h>

using namespace std;
int main(){
	int l,s,c;//分别为行和列 
	cin>>l>>s;
	char a[l][s];
	for(int i = 0;i<l;i++){
		for(int j = 0;j<s;j++){
			cin>>a[i][j];
			if(a[i][j]=='T'){
				c++;
			}
		}
	}
	cout<<c<<endl;
	for(int i = 0;i<l;i++){
		for(int j = 0;j<s;j++){
			cout<<a[i][j];
		}
		cout<<endl;
	}
	return 0;
}
