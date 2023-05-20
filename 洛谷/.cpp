#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n = 0,m = 0,a[10010] = {0},sum = 0,c = 0;
	cin>>n>>m;
	for(int i = 0;i<n;i++){
		cin>>a[i];
	}
	for(int i = 0;i<n;i++){
		for(int j = i;j<n;j++){
			sum += a[j];
			if(sum%m == 0 && sum != 0){
				c++;
			}
		}
	sum = 0;
	}
	cout<<c;
	return 0;
}
