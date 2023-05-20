#include<bits/stdc++.h>
using namespace std;

int main(){
	string a;
	cin>>a;
	int n = a.size();
	for(int i = 1;i<=n;i++) cin>>a[i];
	for(int j = 1;j<=n-1;j++){
		for(int i = 1;i<=n - 1;i++){
			if(a[i]>a[i+1]){
				swap(a[i],a[i+1]);
			}
		}
	}
	cout<<a;
	return 0;
}
