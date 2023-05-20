#include<bits/stdc++.h>
using namespace std;

int a[10010],b[10010],c[20020];
int main(){
	int n,m;
	cin>>n>>m;
	for(int i = 1;i<=n;i++){
		cin>>a[i];
	}
	for(int j = 1;j<=m;j++){
		cin>>b[j];
	} 
	int i = 1,j = 1;
	int cnt = 0;
	while(i<=n&&j<=m){
		if(a[i]<=b[j]){
			c[cnt] = a[i];
			cnt++;
			i++;
		}else{
			c[cnt] = a[j];
			cnt++;
			j++;
		}
	}
	while(i<=n) c[cnt++] = a[i++];
	while(j<=m) c[cnt++] = b[j++];
	for(int k = 0;k<cnt;k++){
		cout<<c[k]<<" ";
	}
	return 0;
}
