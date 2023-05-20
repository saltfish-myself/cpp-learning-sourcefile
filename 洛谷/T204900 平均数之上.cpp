#include<bits/stdc++.h>
using namespace std;

int main(){
	double n,b,c,f[100];
	cin>>n;
	for(int i = 0;i<n;i++){
		cin>>f[i];
		b += f[i];
	}
	b = b / n;
	for(int i = 0;i<=n;i++){
		if(f[i]>b){
			cout<<f[i]<<endl;
		}
	}
	return 0;
}
