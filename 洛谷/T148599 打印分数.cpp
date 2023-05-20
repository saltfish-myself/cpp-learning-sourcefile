#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m[100],mm = 0,x = 0;
	cin>>n;
	for(int i = 0;i<n;i++){
		cin>>m[i];
		x++;
	}
	for(int i = 0;i<x;i++){
		mm = m[i] + mm;
	}
	mm = mm / x;
	for(int i = 0;i<x;i++){
		if(m[i] < mm) {
			cout<<m[i]<<" ";
		}
	}
//	cout<<mm;
}
