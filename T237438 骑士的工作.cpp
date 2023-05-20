#include<bits/stdc++.h>
using namespace std;
int a[20010],b[20010];
int main(){
	int n,m,res = 0;
	cin>>n>>m;
	for(int i = 1;i<=n;i++) cin>>a[i];
	for(int i = 1;i<=m;i++) cin>>b[i];
	sort(a+1,a+1+n);
	sort(b+1,b+1+n);
	while(i<=n&&j<=m){
		if(b[j]>=a[i]){
			res+=b[j];
			j++,i++;
		}else{
			j++;
		}
	}
	if(i>n) cout<<res;
	else cout<<"you died";
	return 0;
}
