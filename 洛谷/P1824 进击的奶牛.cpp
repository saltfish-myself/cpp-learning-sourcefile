#include<bits/stdc++.h>
using namespace std;
int cow[1000010];
int n,c,a;
bool check(int x){
	int num=0;
	int l=cow[1];
	for(int i=2;i<=n;i++){
		if(cow[i]-l<x) num++;
		else l=cow[i];
		if(num>a) return false;
	}
	return true;
}
int main(){ 
	cin>>n>>c;
	for(int i=1;i<=n;i++)
	cin>>cow[i];
	sort(cow+1,cow+n+1); 
	a=n-c;
	int l=1;
	int r=cow[n]-cow[1];
	while(l+1<r){
		int mid=(l+r)/2;
		if(check(mid)) l=mid;
		else r=mid;
	}
	if(check(r)) cout<<r;
	else cout<<l;
	return 0;
}
