#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	queue<int> q;
	int num = 1;
	for(int i = 1;i<=n;i++) q.push(i);
	while(q.size()>1){
		int c = q.front();
		q.pop();
		if(num!=m){
			q.push(c);
			num++;
		}else {
			num = 1;
			cout<<c<<" ";
		}
	}
	cout<<q.front();
	return 0;
}
