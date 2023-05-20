#include<bits/stdc++.h>
using namespace std;
long long a[1000000000010];
int main(){
	long long n,zh = 0,fu = 0;
	cin>>n;
	for(long long i = 1;i<=n;i++) {
		cin>>a[i];
	}
	for(long long i = 1;i<=n - 2;i++){
		for(int j = i;j<=i+3;j++){
			if(a[j]<0) fu++;
			else zh++;	
		}
		if(fu>zh){
			swap(a[i],a[i + 1]);
			swap(a[i + 1],a[i + 2]);
		}else{
			swap(a[i],a[i + 2]);
		}
		zh = 0;
		fu = 0;
	}
	for(long long i = 1;i<=n;i++) cout<<a[i]<<" ";
	return 0;
}
