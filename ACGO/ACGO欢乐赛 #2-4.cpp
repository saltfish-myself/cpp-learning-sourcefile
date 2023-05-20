#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m,du,z,sum = 1;
	cin>>n>>m;
	if(n>m){
		du = n - m;
		z = m;
	}else{
		du = m - n;
		z = n;
	}
	for(int i = 1;i<z;i++){
		sum *= i;
	}
	sum = sum*z*(du + 1);
	for(int i = z - 2;i>0;i--){
		sum *= i;
	}
	cout<<sum;
	return 0;
}
