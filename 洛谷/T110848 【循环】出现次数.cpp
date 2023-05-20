#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,m,x,k;
	cin>>N>>m;
	for(int i = 1;i <= N;i++){
		cin>>x;
		if(x == m){
			k++;
		}
	}
	cout<<k;
}
