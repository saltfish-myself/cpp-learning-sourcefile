#include<bits/stdc++.h>
using namespace std;

int main(){
	long long k,x,sum = 0,a,b;
	cin>>k;
	priority_queue< long long, vector<long long>, greater<long long> > f; 
	for(long long i = 0;i<k;i++){
		cin>>x;
		f.push(x);
	}
	for(long long i = 0;i<k-1;i++){
		a = f.top();
		f.pop();
		b = f.top();
		sum = sum + a + b;
		f.pop();
		f.push(a+b);
	}
	cout<<sum;
	return 0;
}
