#include <bits/stdc++.h>
using namespace std;
 
int main(){
	int n,a[100000],sum = 1,all = 0;
	cin>>n;
	for(int i = 1;i<=n;i++){
		for(int j = 1;j<=i;j++){
			sum *= j;
		}
		a[i] += sum;
		sum = 1;
	}
	for(int i = 1;i<=n;i++){
		all = a[i] + all;
	}
	cout<<all;
}
