#include<bits/stdc++.h>
using namespace std;

int main(){
	string a;
	cin>>a;
	int len = a.size();
	for(int i = 0;i<len;i++){
		if(a[i]>='a'&&a[i]<='z')a[i]-=32;
	}
	cout<<a;
	return 0;
}
