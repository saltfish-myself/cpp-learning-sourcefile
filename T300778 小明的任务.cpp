#include<bits/stdc++.h>
using namespace std;

int main(){
	string a;
	getline(cin,a);
	int len = a.size();
	for(int i = 0;i<len;i++){
		if(a[i]>='A'&&a[i]<='Z')a[i]+=32;
		else if(a[i]>='a'&&a[i]<='z')a[i]-=32;
	}
	cout<<a;
	return 0;
}
