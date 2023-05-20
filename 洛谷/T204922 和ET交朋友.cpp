#include<bits/stdc++.h>
using namespace std;
const int N = 100000;
int main(){
	int n;
	cin>>n;
	int a[N];
	int len = 1;
	do{
		a[len++] = n%2;
		n /= 2;
	}while(n!=0);
	for(int i = len-1;i>=1;i--){
		cout<<a[i];
	}
	return 0;
}
