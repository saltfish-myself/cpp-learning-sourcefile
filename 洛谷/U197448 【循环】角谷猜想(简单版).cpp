#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n = 0,a = 0,co = 0;
	cin>>n;
	while(n != 1){
		if(n % 2 == 1){
			n = n * 3 + 1;
			co++;
		}else{
			n = n / 2;
			co++;
		}
	}
	cout<<co;
	return 0;
}
