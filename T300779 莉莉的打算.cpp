#include<bits/stdc++.h>
using namespace std;

int main(){
	int a[13],all = 0,mo = 0,x;
	for(int i = 1;i<=12;i++){
		cin>>a[i];
	}
	for(int i = 1;i<=12;i++){
		all = all + 300 - a[i];
		if(all>=100){
			x = all/100;
			all = all - x * 100;
			mo += x * 100;
		}else if(all<0){
			cout<<"-"<<i;
			return 0;
		}
	}
	all += mo * 1.2;
	cout<<all;
	return 0;
}
