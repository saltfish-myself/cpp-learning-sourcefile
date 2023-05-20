#include<bits/stdc++.h>
using namespace std;

int main(){
	double a,b,c,d;
	int n,k;
	a = 0;
	b = 0;
	cin>>n>>k;
	for(int i = 1;i <= n;i++){
		if(i % k == 0){
			a = a + i;
			c++;
		}else{
			b = b + i;
			d++;
		}
	}
	a = a / c;
	b = b / d;
	printf("%.1lf",a);
	cout<<" ";
	printf("%.1lf",b);
	return 0;
}
