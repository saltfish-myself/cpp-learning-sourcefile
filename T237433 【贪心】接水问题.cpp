#include<bits/stdc++.h>
using namespace std;

struct person{
	int t,idx;
}a[10010];
bool cmp(person x,person y){
	return x.t<y.t;
}
int main(){
	int n,sum;
	cin>>n;
	for(int i = 1;i<=n;i++){
		cin>>a[i].t;
		a[i].idx = i;
	}
	sort(a+1,a+1+n,cmp);
	for(int i = 1;i<=n;i++){
		sum+=(n-i)*a[i].t;
		cout<<a[i].idx<<" ";
	}
	printf("\n%.2lf",sum*1.0/n);
	return 0;
}
