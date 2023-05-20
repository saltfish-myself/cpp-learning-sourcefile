#include<bits/stdc++.h>
using namespace std;

int a[100010];
int main(){
	int n,m;
	cin>>n;
	for(int i = 1;i<=n;i++) cin>>a[i];
	cin>>m;
	cout<<lower_bound(a+1,a+1+n,m) - a;
	return 0;
}
