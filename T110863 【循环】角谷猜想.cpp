#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n = 0,a = 0,co = 0,c;
	cin>>n;
	while(n != 1){
		if(n % 2 == 1){
			c = n;
			n = n * 3 + 1;
			co++;
			cout<<c<<"*"<<3<<"+"<<1<<"="<<n<<endl;
		}else{
			c = n;
			n = n / 2;
			co++;
			cout<<c<<"/"<<2<<"="<<n<<endl;
		}
	}
	cout<<"End";
	return 0;
}
