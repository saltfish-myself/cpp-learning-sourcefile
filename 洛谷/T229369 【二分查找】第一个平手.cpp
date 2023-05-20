#include<bits/stdc++.h>
using namespace std;

int a[1000010];
int main(){
	long n,m;
	cin>>n;
	for(long i = 1;i<=n;i++) cin>>a[i];
	cin>>m;
	cout<<lower_bound(a+1,a+1+n,m) - a - 1;
	return 0;
}
