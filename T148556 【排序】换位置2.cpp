#include<bits/stdc++.h>
using namespace std;

int a[10010],b[10010];
int main(){
	int n,y,x;
	cin>>n;
	for(int i = 1;i<=n;i++){
		cin>>y;
		a[i] = y;
		b[i] = y;
	}
	for(int j = 1;j<=n-1;j++){
		for(int i = 1;i<=n - 1;i++){
			if(a[i]>a[i+1]){
				swap(a[i],a[i+1]);
			}
		}
	}
	for(int j = 1;j<=n-1;j++){
		if(b[j] = a[n]){
			x = j;
		}
	}
	swap(b[x],b[1]);
	for(int i = 1;i<=n;i++) cout<<b[i]<<" ";
	return 0;
}
