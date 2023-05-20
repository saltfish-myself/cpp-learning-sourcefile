#include<bits/stdc++.h>
using namespace std;

int a[30010];
int main(){
	int sum,n,res = 0;
	cin>>sum>>n;
	for(int i = 1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	int i = 1,j = n;
	while(i<=j){
		if(a[i]+a[j]<=sum){
			i++,j--;
		}else{
			j--;
		}
		res++;
	}
	if(i==j) res++;
	cout<<res;
}
