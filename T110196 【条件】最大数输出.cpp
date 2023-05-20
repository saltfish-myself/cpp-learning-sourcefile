#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c,d;
	cin >> a >> b >> c;
	d = a;
	if(d < b) {
	    d = b; 
    }
	if(d < c) {
	    d = c;
    }
	cout<<d;
	return 0;
}
