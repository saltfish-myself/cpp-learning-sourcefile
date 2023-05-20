#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int act = 0;
	for(int i=1;i<=n;i++){
		int x = i;
		while(x!=0){
			if(x%10==1) act++;
			x/=10;
		}
	}
	cout<<act;
	return 0;
}
