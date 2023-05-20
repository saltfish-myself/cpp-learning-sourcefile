#include<bits/stdc++.h>
using namespace std;

int a[100010];
int main(){
	int n,m;
	cin>>n;
	for(int i = 1;i<=n;i++) cin>>a[i];
	cin>>m;
	int l = 0,r = n + 1;
	while(l + 1 != r){
		int mid = l + r >> 1;
		if(a[mid]<m) l = mid;
		else r = mid;
	}
	if(a[r]==m) cout<<r;
	else cout<<-1;
	return 0;
}
