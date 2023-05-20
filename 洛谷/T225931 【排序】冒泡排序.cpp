#include<bits/stdc++.h>
using namespace std;

long long a[1000000010];
int main(){
	long long x,n,o_a = 0,cnt = 0;
	cin>>x;
	for(long long i = 1;i<=x;i++){
		o_a = 0;
		cnt = 0;
		cin>>n;
		for(long long i = 1;i<=n;i++) cin>>a[i];
		for(long long j = 1;j<=n-1;j++){
			for(long long i = 1;i<=n - 1;i++){
				if(a[i]>a[i+1]){
					swap(a[i],a[i+1]);
				}
			}
		}
		o_a = a[1];
		for(long long j = 2;j<=x;j++){
			if(a[j]==o_a){
				cout<<"NO"<<endl;
				cnt++;
				break;
			}
		}
		if(cnt==0){
			cout<<"YES"<<endl;
		}
	}
	return 0;
}
