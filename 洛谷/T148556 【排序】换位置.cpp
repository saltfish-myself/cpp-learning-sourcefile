#include<bits/stdc++.h>
using namespace std;

int a[10010];
int main(){
	int n,x = 1;
	cin>>n;
	for(int i = 1;i<=n;i++) cin>>a[i];
	for(int i = 1;i<=n - 1;i++){
		if(a[x]<a[i+1]){
			x = i + 1;
		}
	}
	swap(a[1],a[x]);
	for(int i = 1;i<=n;i++) cout<<a[i]<<" ";
	return 0;
}
