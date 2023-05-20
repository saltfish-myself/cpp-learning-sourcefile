#include<bits/stdc++.h>
using namespace std;

int a[30][30];
int main(){
	a[0][0]=1;
	int l;
	cin>>l;
	for(int i = 1;i<=l;i++){
		for(int j = 1;j<=l;j++){
			a[i][j] = a[i-1][j]+a[i-1][j-1];
		}
	}
	for(int i = 1;i<=l;i++){
		for(int j = 1;j<=i;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
