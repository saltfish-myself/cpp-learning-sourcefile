#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	int l,b = 0,cnt = 0,a,x;
	cin>>a;
	for(int j = 0;j<a;j++){
		cin>>x>>s;
		l = s.size();
		for(int i = 0;i<l;i++){
			if(s[i]!='M' && s[i]!='m'&&cnt == 0) {
				b++;
			}else{
				if(cnt != 0){
					cnt++;
				}
			}
			if(s[i]!='E' && s[i]!='e'&&cnt == 1) {
				b++;
			}else{
				if(cnt != 1){
					cnt++;
				}
			}
			if(s[i]!='O' && s[i]!='o'&&cnt == 2) {
				b++;
			}else{
				if(cnt != 2){
					cnt++;
				}
			}
			if(s[i]!='W' && s[i]!='w'&&cnt == 3) {
				b++;
			}else{
				if(cnt != 3){
					cnt++;
				}
			}
			cnt = 0;
		}
		if(b){
			cout<<"NO";
		}else{
			cout<<"YES";
		}
	}
	
}
