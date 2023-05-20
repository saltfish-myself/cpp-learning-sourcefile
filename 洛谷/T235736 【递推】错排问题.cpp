#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[10010] = {0,0,1};
int main(){
	int n;
	cin>>n;
	for(int i = 3;i<=n;i++){
		a[i] = (i-1)*(a[i-1]+a[i-2]);
	}
	cout<<a[n];
	return 0;
}
