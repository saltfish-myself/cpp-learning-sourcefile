#include<bits/stdc++.h>
using namespace std;

long long tree[1000010];
int main(){
	long long n,m,h;
	cin>>n>>m;
	for(int i = 0;i<n;i++){
		cin>>tree[i];
	}
	int l = 0,r = 1000000;
	h = 0;
	while(l + 1 != r){
		int mid = l + r >> 1;
		for(int i =0;i<n;i++){
			h += tree[i] - mid;
		}
		if(h<=m) l = mid;
		else r = mid;
	}
	cout<<tree[r];
}
