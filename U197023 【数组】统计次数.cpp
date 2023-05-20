#include<bits/stdc++.h>
using namespace std;
int a[100];

int main(){
	int n,b,t;
	cin>>n;
	for(int i = 0;i<n;i++){
		cin>>b;
		t = a[b];
		a[b]=++t;
	}
	for(int i = 0;i<101;i++){
		if(a[i] != 0){
			cout<<i+1<<" "<<a[i];
		}
	}
}
