#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int a,b,c;
	cin>>a>>b;
	if(a < b){
		c = a;
		a = b;
		b = c;
	}
	cout<<a<<" "<<b;
	return 0;
}
