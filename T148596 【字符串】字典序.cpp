#include<bits/stdc++.h>
using namespace std;

int main(){
	string a,b;
	cin>>a>>b;
	if(a<b){
		cout<<a<<" "<<b;
	}else if(b<a){
		cout<<b<<" "<<a;
	}else if(a==b){
		cout<<a;
	}
	return 0;
}
