#include<bits/stdc++.h>
using namespace std;

int a[10010];
int main(){
	int n,x,y;
	cin>>n;
	for(int i = 1;i<=n;i++) cin>>a[i];
	for(int j = 1;j<=n-1;j++){
		for(int i = 1;i<=n - 1;i++){
			if(a[i]>a[i+1]){
				swap(a[i],a[i+1]);
			}
		}
	}
	for(int i = 1;i<=n;i++){
		y = a[i];
		if(a[i]==a[i+1]){
			a[i+1] = 0;
		}
	}
	int t = 0;
	for(int i = 1;i<=n;i++){
		if(a[i] != 0){
			t++;
		}
	}
	cout<<t<<endl;
	for(int i = 1;i<=n;i++){
		if(a[i] != 0){
			cout<<a[i]<<" ";
		}
	}
	return 0;
}
