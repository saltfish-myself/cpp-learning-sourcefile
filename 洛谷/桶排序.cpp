#include<bits/stdc++.h>
using namespace std;
int a[110];
int main(){
	int n,x;
	cin>>n;
	for(int i = 0;i<n;i++){
		cin>>x;
		a[x] = 1;
	}
	for(int i = 0;i<=n;i++){
		if(a[i] == 1){
			cout<<i<<" ";
		}
	}
	return 0;
}
