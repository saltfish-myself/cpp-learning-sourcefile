#include<bits/stdc++.h>
using namespace std;
int n,x,mx = -100;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x;
		if(x > mx){
			mx = x;
		}
	}
	cout<<mx;
}
