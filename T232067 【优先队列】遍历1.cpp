#include<bits/stdc++.h>
using namespace std;

int main(){
	priority_queue< int > q;
	int n,x;
	cin>>n;
	while(n--){
		cin>>x;
		q.push(x);
	}
	while(!q.empty()){
		cout<<q.top()<<" ";
		q.pop();
	}
	return 0;
}
