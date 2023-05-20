#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[3001],n,b;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]%2==0){
			b++;
		}
	}
	cout<<b;
}

