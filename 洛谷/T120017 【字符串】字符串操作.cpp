#include<bits/stdc++.h>
using namespace std;

int main(){
	string s1,s2;
	int c,op;
	cin>>s1>>c;
	for(int i = 0;i<c;i++){
		cin>>op;
		if(op==1){
			cin>>s2;
			s1+=s2;
		}else if(op==2){
			cout<<s1.size()<<endl;
		}else if(op==3){
			cin>>s2;
			if(s1>s2){
				cout<<s1<<endl;
			}else if(s1==s2){
				cout<<s1<<endl;
			}else{
				cout<<s2<<endl;
			}
		}
	}
	return 0;
}
