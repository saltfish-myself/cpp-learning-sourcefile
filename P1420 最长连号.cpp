#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a,b=-100;
	int len = 1;
	int max=0;
	for(int i=1;i<=n;i++){
		cin>>a;
		if(a - b ==1){
			len++;
		}else{
			len = 1;
		}
		if(len > max) max = len;
		b = a;
	}
	cout<<max;
	return 0;
} 

