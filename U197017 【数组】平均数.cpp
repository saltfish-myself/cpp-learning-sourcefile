#include<bits/stdc++.h>
using namespace std;

int main(){
	double a,b,c[1001],d = 0;
	cin>>a;
	for (int i = 1;i <= a;i++){
		cin>>b;
		c[i] = b;
	}
	for (int i = 1;i <= a;i++){
		d = c[i] + d;
	}
	d = d / a;
	printf("%.3lf",d);
}
