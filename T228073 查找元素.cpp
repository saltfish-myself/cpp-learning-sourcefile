#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
	int line[1010];
	int n,x;
	cin>>n;
	for(int i = 0;i<n;i++){
		cin>>line[i];
	}
	cin>>x;
	for(int i = 0;i<n;i++){
		if(line[i]==x){
			cout<<i+1;
			return 0;
		}
	} 
	cout<<"-1";
	return 0;
} 
