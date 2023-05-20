#include<bits/stdc++.h>
using namespace std;

int main(){
	string o,t,jo,jt;
	getline(cin,o);
	getline(cin,t);
	int len;
	len = o.size();//o的简化 
	for(int i = 0;i<len;i++){
		if(o[i]>='A'&&o[i]<='Z')jo+=(o[i]+32);
		else if(o[i]>='a'&&o[i]<='z')jo+=o[i];
	}
	len = t.size();//t的简化 
	for(int i = 0;i<len;i++){
		if(t[i]>='A'&&t[i]<='Z')jt+=(t[i]+32);
		else if(t[i]>='a'&&t[i]<='z')jt+=t[i];
	}
	if(jo==jt){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
}
