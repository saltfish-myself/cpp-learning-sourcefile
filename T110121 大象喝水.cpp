#include<bits/stdc++.h> 
using namespace std;
int main()
{
	double pi;
	long long h,r;
	long long need;
	cin>>h>>r;
	pi = 3.14159;
	need = r * r * pi * h;
	need = 20000 / need;
	need = need + 1;
	cout<<need;
	return 0;
 } 
