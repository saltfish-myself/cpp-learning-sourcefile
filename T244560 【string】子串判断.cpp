#include<bits/stdc++.h>
using namespace std;

//char a[10010],b[10010];
int main(){
	string a,b;
	int t = 0;
	cin>>a>>b;
	if(a.size()>b.size()){
		for(int i = 0;i<a.size();i++){
			if(a[i]==b[0]){
				for(int j = 1;j<=b.size();j++){
					if(a[i+j]==b[j]){
						t++;
					}
				}
			}
			if(t==b.size()-1){
				cout<<b<<" "<<"is substring of"<<" "<<a;
				return 0;
			}
		}
	}else if(b.size()>a.size()){
		for(int i = 0;i<b.size();i++){
			if(b[i]==a[0]){
				for(int j = 1;j<=a.size();j++){
					if(b[i+j]==a[j]){
						t++;
					}
				}
			}
			if(t==a.size()-1){
				cout<<a<<" "<<"is substring of"<<" "<<b;
				return 0;
			}
		}
	}
	cout<<"No substring";
	return 0;
}
