#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a=1,b=1,all = 0;
	for(int i=1;i<=n;i++){
		all+=b;
		a--;
		if(a==0){
			b++;
			a = b;
		}
	}
	cout<<all;
} 
