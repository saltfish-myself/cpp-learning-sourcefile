#include<bits/stdc++.h>
using namespace std;

int main(){
	char a[10010];
	cin>>a;
	for(int i=0;a[i];i++){
		if(a[i]>='a'&&a[i]<='z')a[i]-=32;
		else if(a[i]>='A'&&a[i]<='Z') a[i]+=32;
	}
	cout<<a;
	
	return 0;
}
