#include<bits/stdc++.h>
using namespace std;

long long n,m;
long long a[10010] = {0,1,2};
int main(){
	int n;
	cin>>n;
	for(int i = 3;i<=n;i++){
		a[i] = a[i-1]+a[i-2];
	}
	cout<<a[n];
	return 0;
}
