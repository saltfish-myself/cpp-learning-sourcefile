#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[50000],n,b;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>b;
		a[i] = b;
	}
	for(int i=1;i<=n;i++){
		cout<<a[i]<<endl;
	}
}

