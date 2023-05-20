#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a;
	double num = 0;
	cin>>n;
	for(int i = 1;i <= n;i = i + 1){
		cin>>a;
		num += a;
	}
	num=num/n;
	printf("%.2lf",num);
	return 0;
}
