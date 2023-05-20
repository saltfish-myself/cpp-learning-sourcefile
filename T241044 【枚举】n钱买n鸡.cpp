#include<bits/stdc++.h>
using namespace std;

int main(){
	int g,k,n,c;
	cin>>n;
	for(int i = 0;i<=n/5;i++){
		for(int j = 0;j<=n/3;j++){
			g = n-i*5-j*3;
			k = g*3;
			if(k%3==0&&i+j+k==n&&i*5+j*3+k/3==n){
				c++;
			}
		}
	}
	cout<<c;
	return 0;
}
