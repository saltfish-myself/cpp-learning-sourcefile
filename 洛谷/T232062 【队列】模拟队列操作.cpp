#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,x;
	cin>>n;
	queue<int> q;
	int o;
	while(n--){
		cin>>o;
		if(o==1){
			cin>>x;
			q.push(x);
		}else if(o==2){
			if(q.size()>0){
				q.pop();
			}else cout<<"impossible!"<<endl;
		}else{
			if(q.size()>0){
				cout<<q.front()<<endl;
			}else cout<<"impossible!"<<endl;
		}
	}
	return 0;
}
