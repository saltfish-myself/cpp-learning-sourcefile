#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
	if(a%b==0) return b;
	else gcd(b,a%b);
}
int main(){
	int n,m;
	while(cin>>n>>m) cout<<gcd(n,m)<<endl;
	return 0;
}
