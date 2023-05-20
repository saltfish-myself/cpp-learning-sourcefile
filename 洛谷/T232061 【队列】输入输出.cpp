#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,x;
	cin>>n;
	queue<int> k;
	while(n--){
		cin>>x;
		k.push(x);
	}
	while(!k.empty()){
		cout<<k.front()<<endl;
		k.pop();
	}
	return 0;
}
