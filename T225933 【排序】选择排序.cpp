#include<bits/stdc++.h>
using namespace std;

int a[10010];
int main(){
	int n;
	cin>>n;
	for(int i = 1;i<=n;i++) {
		cin>>a[i];
	}
	for(int j = 1;j<=n;j++){
		int min = j;
		for(int i = j;i<=n;i++){
			if(a[i] < a[min]){
				min = i;
			}
		}
		swap(a[min],a[j]);
	}
	
	for(int i = 1;i<=n;i++) cout<<a[i]<<" ";
	return 0;
}
