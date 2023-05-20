#include<bits/stdc++.h>
using namespace std;
int a[110];
int main(){
	int n,x;
	cin>>n;
	for(int i = 0;i<n;i++){
		cin>>x;
		a[x]++;
	}
	for(int i = 0;i<=100;i++){
		if(a[i] >= 1){
			for(int j = 1;j<=a[i];j++){
				cout<<i<<" ";
			}
		}
	}
	return 0;
}
