#include<bits/stdc++.h> 
using namespace std;
int main ()
{
	int a,b,c,d;//�������
	cin>>a;//������λ�� 
	b = a%100%10;
	cout<<b;
	c = a % 100 - b;
	c = c/10;
	cout<<c;
	d = a - c *10;
	d = d - b;
	d = d / 100;
	cout<<d;
	return 0;
}
