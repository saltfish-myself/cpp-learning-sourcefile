#include<bits/stdc++.h>
using namespace std;

int main(){
	int x,n;
	cin>>x>>n;
	int a[1010];
	for(int i = 1;i<=x;i++){
		cin>>a[i];
	}
	int j = x;
	while(a[j]>n && j>=1){
		a[j+1] = a[j];
		j--;
	}
	a[j+1] = n;
	for(int i = 1;i<x+2;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
