#include<bits/stdc++.h>
using namespace std;
int a[20],n[110];
int main(){
	int x;
	cin>>x;
	for(int i = 0;i<x;i++){
		cin>>a[i];
	} 
	for(int i = 0;i<x;i++){
		n[a[i]]++;
	}
	for(int i = 0;i<=100;i++){
		if(n[i]!=0){
			cout<<i<<" "<<n[i]<<endl;
		}
	}
	return 0;
}
