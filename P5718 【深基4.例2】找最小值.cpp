#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k,mm,x = 1;//n是数字个数，k是输入的数
	cin>>n;
	for(int i = n;i>=1;i--){
		cin>>k;
		if(x == 1){
			mm = k;
		}
		if(k<mm){
			mm = k;
		}
		x++;
	} 
	cout<<mm;
}
