#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,x;
	cin>>n;
	for(int i = 0;i<=n/6;i++){
		for(int j = 0;j<=n/3;j++){
			int k = n - i*6 - j*3;
			if(k>=0){
				x++;
			}
		}
	}
	cout<<x;
	return 0;
}
