#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,x = 0;
	cin>>n;
	while(n != 0){
		x = x * 10 + n %10;
		n /= 10;
	}
	cout<<x;
	return 0;
}
