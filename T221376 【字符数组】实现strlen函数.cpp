#include<bits/stdc++.h>
using namespace std;
int len(char a[]){
	int n = 0;
	for(int i = 0;a[i];i++){
		n++;;
	}
	return n;
}
int main(){
	char a[110];
	cin>>a;
	cout<<len(a);
	return 0;
}
