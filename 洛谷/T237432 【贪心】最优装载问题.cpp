#include<bits/stdc++.h>
using namespace std;

int a[10010];
int main(){
	int c,n,res = 0;
	cin>>c>>n;
	for(int i = 1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	for(int i = 1;i<=n;i++){
		if(c>=a[i]){
			c-=a[i];
			res++;
		}else{
			break;
		}
	}
	cout<<res;
	return 0;
}
