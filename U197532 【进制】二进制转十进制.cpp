#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
		int sum=0,p=1;
	while(n){
		int t = n% 10;
		sum += t*p;
		p*=2;
		n/=10;
	}
	cout<<sum;
	return 0;
}
