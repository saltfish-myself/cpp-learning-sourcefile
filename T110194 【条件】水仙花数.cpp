#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int a,b,c,n;
	cin>>n;
	a = n / 100;
	b = n /10 - a * 10;
	c = n - a * 100 - b * 10;
	if(a * a * a + b * b * b + c * c * c == n){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
}
