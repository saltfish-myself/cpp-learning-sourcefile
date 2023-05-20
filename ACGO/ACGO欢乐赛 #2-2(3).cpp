#include <bits/stdc++.h>
using namespace std;
bool check(long long x,long long  y,long long z){
	int cou = 0;
	if(x>=0) cou++;
	if(y>=0) cou++;
	if(z>=0) cou++;
	return cou<3-cou;
}
long long a[100010];
int main() {
	int n;
	cin>>n;
	for(int i=1 ;i<=n;i++) cin>>a[i];
	for(int i = 1; i<=n-2; i++){
		swap(a[i],a[i+2]);
		if(check(a[i],a[i+1],a[i+2])) {
			swap(a[i+1],a[i]);
		}
	}
 for(int i=1;i<=n;i++) cout<<a[i]<<" ";
	return 0;
}
