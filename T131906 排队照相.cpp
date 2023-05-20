#include<bits/stdc++.h>
using namespace std;

int a[10010],g[10010],b[10010];
int main(){
	int n,tb = 1,tg = 1;
	cin>>n;
	for(int i = 1;i<=n;i++) cin>>a[i];
	for(int i = 1;i<=n;i++){
		if(a[i]>0){
			b[tb] = a[i];
			tb++;
		}
		if(a[i]<0){
			g[tg] = a[i];
			tg++;
		}
	}
	for(int j = 1;j<=n;j++){
		for(int i = 1;i<=n;i++){
			if(b[i]>b[i+1]){
				swap(b[i],b[i+1]);
			}
		}
	}
	for(int j = 1;j<=n;j++){
		for(int i = 1;i<=n;i++){
			if(g[i]<g[i+1]){
				swap(g[i],g[i+1]);
			}
		}
	}
	for(int i = 1;i<110;i++) {
		if(b[i] != 0){
			cout<<b[i]<<" ";
		}
	}
	for(int i = 1;i<10010;i++) {
		if(g[i] != 0){
			cout<<g[i]<<" ";
		}
	}
	return 0;
}
