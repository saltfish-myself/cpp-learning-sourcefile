#include<bits/stdc++.h>
using namespace std;
int a[100010],t[100010];
void merge(int a[],int l1,int r1,int l2,int r2){
	int i = l1,j = l2,cnt = 0;
	while(i<=r1&&j<=r2){
		if(a[i]<a[j]) t[cnt++] = a[i++];
		else t[cnt++] = a[j++];
	}
	while(i<=r1) t[cnt++] = a[i++];
	while(j<=r2) t[cnt++] = a[j++];
	for(int k = 0;k<cnt;k++) a[l1+k]=t[k];
}
void merge_sort(int a[],int l,int r){
	if(r<=l) return;
	int mid = l + r>>1;
	merge_sort(a,l,mid);
	merge_sort(a,mid+1,r);
	merge(a,l,mid,mid+1,r);
}
int main(){
	int n;
	cin>>n;
	for(int i = 1;i<=n;i++) cin>>a[i];
	merge_sort(a,1,n);
	for(int i= 1;i<=n;i++) cout<<a[i]<<" ";
	return 0;
}
