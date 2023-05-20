#include<bits/stdc++.h>
using namespace std;

long long a[1000010],m[1000010];
int main(){
	long long n,x;
	cin>>n;
	for(long long i = 0;i<n;i++) cin>>a[i];
		cin>>x;
	for(long long i = 0;i<x;i++) cin>>m[i];
	long long l = 0,r = n + 1;
	for(long long i = 0;i<x;i++){
		l = 0,r = n + 1;
		while(l + 1 != r){
			long long mid = l + r >> 1;
			if(a[mid]<m[i]) l = mid;
			else r = mid;
		}
		if(a[r]==m[i]) cout<<r<<endl;
		else cout<<-1<<endl;
	}
	return 0;
} 
