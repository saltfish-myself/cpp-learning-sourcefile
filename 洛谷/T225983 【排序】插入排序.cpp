#include<bits/stdc++.h>
using namespace std;
int a[10010];
int main(){
	int n;
	cin>>n;
	for(int i = 1;i<=n;i++){
		cin>>a[i];
	}
	for(int i = 2;i<=n;i++){
		int j = i - 1;
		int x = a[i];
		while(j>=1&&a[j]>x){
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = x;
	}
	for(int i = 1;i<=n;i++) cout<<a[i]<<" ";
	return 0;
}
