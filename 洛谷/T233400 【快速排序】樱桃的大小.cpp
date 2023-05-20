#include<bits/stdc++.h>
using namespace std;
int a[100010];
int partition(int l,int r){
	int x = a[l];
	int i = l,j = r;
	while(i<j){
		while(i<j&&a[j]>=x) j--;
		swap(a[i],a[j]);
		while(i<j&&a[i]<=x) i++;
		swap(a[i],a[j]);
	}
	a[i] = x;
	return i;
}
void quick_sort(int a[],int l,int r){
	if(l>=r) return;
	int p = partition(l,r);
	quick_sort(a,l,p-1);
	quick_sort(a,p+1,r);
}
int main(){
	int n;
	cin>>n;
	for(int i = 1;i<=n;i++) cin>>a[i];
	quick_sort(a,1,n);
	for(int i = 1;i<=n;i++) cout<<a[i]<<" ";
	return 0;
}
