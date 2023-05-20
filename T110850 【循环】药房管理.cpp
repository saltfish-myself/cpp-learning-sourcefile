#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,n,t,k = 0;//a是药品数量，n是当天取药的人数，t是每人取得药品数量 
	cin>>a>>n;
	for(int i = 1;i<=n;i++){
		cin>>t;
		if(a-t>0){
			a = a - t;
		}else{
			k++;
		}
	}
	cout<<k;
}
