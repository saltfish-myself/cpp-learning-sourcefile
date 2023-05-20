#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,a[10000];
	cin>>n;
	for(int i = 0;i<n;i++){
		cin>>a[i];
	}
	for(int i = 0;i<n/2;i++){
		cout<<a[i];
		cout<<" ";
	}
	for(int i = n-1;i>n/2-1;i--){
		cout<<a[i];
		cout<<" ";
	}
}
