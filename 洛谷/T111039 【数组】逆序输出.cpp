#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[101],n,b;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>b;
		a[i] = b;
	}
	for(int i=n;i>=1;i--){
		cout<<a[i]<<" ";
	}
}

