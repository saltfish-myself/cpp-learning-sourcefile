#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,a[50050],b[50050];
	cin>>n;
	for(int i = 0;i<n;i++){
		cin>>a[i];
		b[i] = a[i];
	}
	sort(a,a+n);
	for(int i = 0;i<n;i++){
		cout<<a[i];
	}
}
