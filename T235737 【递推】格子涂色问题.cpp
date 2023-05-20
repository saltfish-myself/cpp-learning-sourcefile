#include<bits/stdc++.h>
using namespace std;

long long a[10010] = {0,3,6,6};
int main(){
	int t;
	cin>>t;
	for(int i = 4;i<=50;i++){
		a[i] = a[i-1] + 2*a[i-2];
	}
	cout<<a[t];
	return 0;
}
