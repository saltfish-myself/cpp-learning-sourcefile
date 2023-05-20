#include<bits/stdc++.h>
using namespace std;

int a[10010];
int main(){
	int n,min = 1;
	cin>>n;
	for(int i = 1;i<=n;i++) {
		cin>>a[i];
	}
	for(int i = 1;i<=n;i++){
		if(a[i] < a[min]){
			min = i;
		}
	}
	swap(a[min],a[1]);
	for(int i = 1;i<=n;i++) cout<<a[i]<<" ";
	return 0;
}
