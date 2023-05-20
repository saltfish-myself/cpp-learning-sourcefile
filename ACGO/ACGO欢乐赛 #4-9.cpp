#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,m,sum = 0;
	cin>>n>>m;
	int a[n+10],b[m+10];
	for(int i = 0;i<n;i++){
		cin>>a[i];
	}
	for(int i = 0;i<m;i++){
		cin>>b[i];
	}
	sort(a,a+n);
	sort(b,b+n);
	for(int i = 0;i<m;i++){
		a[i] = b[i];
	}
	for(int i = 0;i<n;i++){
		sum += a[i];
	}
	cout<<sum;
	return 0;
}
