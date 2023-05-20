#include<bits/stdc++.h>
using namespace std;

int x[10010];
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i = 0;i<n;i++){
		cin>>a[i];
	}
	for(int i = 0;i<n;i++){
		for(int j = 0;j<i+1;j++){
			if(a[i]>a[j]){
				x[i]++;
			}
		}
	}
	for(int i = 0;i<n;i++){
		cout<<x[i]<<" ";
	}
	return 0;
}
