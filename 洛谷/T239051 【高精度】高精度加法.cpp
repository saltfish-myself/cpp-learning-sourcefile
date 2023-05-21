#include<bits/stdc++.h>
using namespace std;

string s1,s2;
int a[100010],b[100010],c[100010];
int main(){
	cin>>s1>>s2;
	for(int i = 0;i<s1.size();i++){
		a[i] = s1[s1.size()-i-1]- '0';
	}
	for(int i = 0;i<s2.size();i++){
		b[i] = s2[s2.size()-i-1]- '0';
	}
	for(int i = 0;i<max(s1.size(),s2.size());i++){
			c[i]+=a[i]+b[i];
			c[i+1]+=c[i]/10;
			c[i]%=10;
	}
	int l = max(s1.size(),s2.size())-1;
	if(c[l+1]){
		l++;
	}
	for(int i = l;i>=0;i--){
		cout<<c[i];
	}
	return 0;
}
