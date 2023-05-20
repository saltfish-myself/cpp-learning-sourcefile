#include<bits/stdc++.h>
using namespace std;
int a[110];
int main(){
	int n;
	cin>>n;
	for(int i = 0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i = n-1;i>=0;i--){
		cout<<a[i]<<" ";
	}
	return 0;
}
