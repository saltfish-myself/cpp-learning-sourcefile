#include<bits/stdc++.h> 

using namespace std;
int main ()
{
	int h,f,r,c;//h是头，f是脚，r是兔子，c是鸡 
	cin>>h;
	cin>>f;
//	r + c = h;
//	2 * c + 4 * r = f;
//	3 * r + c = f - h
	r = f - h * 2;
	r = r / 2;
	c = h - r;
	cout<<c<<endl<<r;
	
	return 0;
}
