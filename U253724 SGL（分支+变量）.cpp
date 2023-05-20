#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	if(n == 1){
		long x;
		cin>>x;
		cout<<x;
	}else if(n == 2){
		long long x;
		cin>>x;
		cout<<x;
	}else if(n == 3){
		float x;
		cin>>x;
		printf("%.2lf",x);
	}else if(n == 4){
		char x;
		cin>>x;
		cout<<(int)x;
	}else if(n == 5){
		int x;
		cin>>x;
		cout<<(char)x;
	}
}
