#include<bits/stdc++.h>
using namespace std;
int n,m,a[1000010];
bool f(int h){
	long long sum = 0;
	for(int i = 1;i<=n;i++){
		if(a[i]>h) sum += a[i] - h;
	} 
	return sum>=m;
}
int main(){
	cin>>n>>m;
	int mx = 0;
	for(int i =1;i<=n;i++){
		cin>>a[i];
		mx = max(a[i],mx);
	}
	int l = 0,r = mx;
	while(l+1!=r){
		long long mid = l+r>>1;
		if(f(mid)) l = mid;
		else r = mid;
	}
	cout<<l;
	return 0;
}
