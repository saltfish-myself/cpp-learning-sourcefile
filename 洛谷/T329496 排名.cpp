#include<bits/stdc++.h>
using namespace std;

int main(){
	int a1,a2,b1,b2;
	cin>>a1>>a2>>b1>>b2;
	if(a1!=b1){
		if(a1>b1){
			cout<<R"("\n")";
		}else{
			cout<<R"("\t")";
		}
	}else{
		if(a2<b2){
			cout<<R"("\n")";
		}else{
			cout<<R"("\t")";
		}
	}
	return 0;
}
