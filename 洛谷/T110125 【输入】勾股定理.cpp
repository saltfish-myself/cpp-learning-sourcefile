#include<bits/stdc++.h> 
using namespace std;
int main ()
{
	while(true){
		cout<<"请输入两个数以计算勾股定理"<<endl<<"第一个数为勾，第二个数为股" <<endl;
		int a,b;
		double c;
		cin>>a>>b;
		c=a * a + b * b;
		c=sqrt(c);
		printf("%.2lf",c);
		cout<<endl;
	}
	return 0;
}


