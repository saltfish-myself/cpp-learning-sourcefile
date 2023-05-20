#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,x;
	cin>>n;
	for(int i = 0;i<=n/5;i++){
		for(int j = 0;j<=n/2;j++){
			int k = n - i*5 - j*2;
			if(k>=0){
				x++;
			}
		}
	}
	cout<<x;
	return 0;
}
