#include<bits/stdc++.h>
using namespace std;

string s[25];
int n;
bool cmp(string a,string b){ 
		return a+b>b+a;
}

int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	sort(s,s+n,cmp);
	for(int i=0;i<n;i++){
		cout<<s[i];
	}
	return 0; 
}
