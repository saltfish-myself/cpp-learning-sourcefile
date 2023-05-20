#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a,mx = 0,sm = 10000;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a;
		if(a > mx){
			mx = a;
		}else if(a <= sm){
			sm = a;
		}
	}
	cout<<mx - sm;
	return 0;
}
