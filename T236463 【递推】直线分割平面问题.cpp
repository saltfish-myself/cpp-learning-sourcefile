#include<bits/stdc++.h>
using namespace std;

long long a[10010] = {0,2};
int main(){
	int n;
	cin>>n;
	for(int i = 2;i<=n;i++){
		a[i] = a[i-1] + i;
	}
	cout<<a[n];
	return 0;
}
