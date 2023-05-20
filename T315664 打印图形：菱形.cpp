#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,x = 1;
	cin>>n;
	for(int i = 0;i<n;i++){
		for(int j = 0;j<n-i-1;j++){
			cout<<" ";
		}
		for(int j = 0;j<x;j++){
			cout<<"*"; 
		}
		cout<<endl;
		x+=2;
	}
	for(int i = n-1;i>0;i--){
		for(int j = n-i;j>0;j--){
			cout<<" ";
		}
		for(int j = x-4;j>0;j--){
			cout<<"*"; 
		}
		cout<<endl;
		x-=2;
	}
	return 0;
}
