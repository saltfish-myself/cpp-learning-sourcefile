#include<bits/stdc++.h>
using namespace std;

int main(){
	stack<int> a;
	int n,k;
	cin>>n;
	for(int i = 0;i<n;i++){
		cin>>k;
		a.push(k);
	}
	while(!a.empty()){
		cout<<a.top()<<" ";
		a.pop();
	}
	return 0;
}
