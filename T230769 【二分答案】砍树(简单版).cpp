#include<bits/stdc++.h>
using namespace std;

long long tree[1000010];
int main(){
	long long n,h,sum = 0;
	cin>>n;
	for(int i = 0;i<n;i++){
		cin>>tree[i];
	}
	cin>>h;
	for(int i = 0;i<n;i++){
		if(h<=tree[i]){
			sum += tree[i] - h;
		}
	}
	cout<<sum;
}
