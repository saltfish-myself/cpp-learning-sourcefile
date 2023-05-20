#include<bits/stdc++.h>
using namespace std;

int main(){
	stack<int> a;
	int n;
	string k;
	cin>>n;
	while(n--){
		cin>>k;
		if(k == "push"){
			int x;
			cin>>x;
			a.push(x);
		}else if(k == "pop"){
			if(!a.empty()){
				cout<<"pop "<<a.top()<<endl;
				a.pop();
			}else cout<<"pop fail"<<endl;
		}else if(k == "top"){
			if(!a.empty()){
				cout<<"top = "<<a.top()<<endl;
			}else cout<<"top fail"<<endl;
		}else if(k == "size"){
			cout<<"size = "<<a.size()<<endl;
		}else if(k == "empty"){
			if(a.empty()) {
				cout<<"yes"<<endl;	
			}else{
				cout<<"no"<<endl;
			}
		}
	}
	return 0;
}
