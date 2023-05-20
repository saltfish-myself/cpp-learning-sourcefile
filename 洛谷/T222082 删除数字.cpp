#include<bits/stdc++.h>
using namespace std;

int main(){
	int x,n;
	cin>>x;
	int a[x];
	for(int i = 0;i<x;i++){
		cin>>a[i];
	}
	cin>>n;
	for(int i = 0;i<x;i++){
		if(a[i] == n){
			a[i] = 0;
		}
	}
	for(int i = 0;i<x;i++){
		if(a[i]!=0){
			cout<<a[i]<<" ";
		}
	}
	
	return 0;
}
