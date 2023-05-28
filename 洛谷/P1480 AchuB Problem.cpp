#include<bits/stdc++.h>
using namespace std;
int a[50010],b[25550010],c[20010];
int main(){
	string s;
	long long b;
	long long r = 0;
	cin>>s>>b;
	for(int i = 0;i<s.size();i++) a[i] = s[i]-'0';
	for(int i = 0;i<s.size();i++){
		r = r*10+a[i];
		c[i] = r/b;
		r = r%b;
	}
	int len = 0;
	while(c[len]==0&&len<s.size())len++;
	for(int i = len;i<s.size();i++) cout<<c[i];
	cout<<endl<<r;
	return 0;
}
