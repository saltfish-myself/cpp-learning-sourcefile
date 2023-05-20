#include<bits/stdc++.h>
using namespace std;

int main(){
	string a;
	getline(cin,a);
	int len = a.size();
	for(int i = 0;i<len;i++){
		if(a[i]>='a'&&a[i]<='y')a[i]+=1;
		else if(a[i]=='z')a[i] = a[i]-25;
	}
	cout<<a;
}
