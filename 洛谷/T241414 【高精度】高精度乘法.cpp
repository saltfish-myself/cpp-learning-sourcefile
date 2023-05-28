#include<bits/stdc++.h>
using namespace std;
int a[10010],b[10010],c[10010];
int main(){
	string s1,s2;
	cin>>s1>>s2;
	int l1 = s1.size(),l2 = s2.size();
	for(int i = 0;i<l1;i++){
		a[i] = s1[l1-i-1]-'0';
	}
	for(int i = 0;i<l2;i++){
		b[i] = s2[l2-i-1]-'0';
	}
	for(int i = 0;i<l1;i++){
		for(int j = 0;j<l2;j++){
			c[i+j]+=a[i]*b[j];
			c[i+1+j]+=c[i+j]/10;
			c[i+j]%=10;
		} 
	}
	int len = l1+l2;
	while(!c[len]&&len){
		len--;
	}
	for(int i = len;i>=0;i--){
		cout<<c[i];
	}
	return 0;
}
