#include<bits/stdc++.h>
using namespace std;
long long a[100];
int f(int x){
	if(a[x]) return a[x];
	else if(x==1||x==2) a[x] = 1;
	else a[x] = f(x-1) + f(x - 2);
	return a[x];
}

int main(){
	int n;
	cin>>n;
	cout<<f(n);
}
