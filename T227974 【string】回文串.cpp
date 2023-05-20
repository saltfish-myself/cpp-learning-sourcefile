#include<bits/stdc++.h>
using namespace std;

int main(){
	string a,b = "";
	cin>>a;
	int len = a.size();
	for(int i = len - 1;i>=0;i--){
		b += a[i];
	}
	if(b == a) cout<<"Yes";
	else cout<<"No";
	return 0;
}
