#include<bits/stdc++.h>
using namespace std;
int main(){
	char a[110];
	cin>>a;
	for(int i=0;a[i];i++){
		if(a[i]=='t') a[i]='w';
	}
	for(int i=0;a[i];i++) cout<<a[i];
	return 0;
}
