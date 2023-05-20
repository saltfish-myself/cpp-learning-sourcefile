#include<bits/stdc++.h>
using namespace std;

int main(){
	int g,k;
	for(int i = 0;i<=20;i++){
		for(int j = 0;j<=33;j++){
			g = 100-i*5-j*3;
			k = g*3;
			if(k%3==0&&i+j+k==100&&i*5+j*3+k/3==100){
				cout<<i<<" "<<j<<" "<<k<<endl;
			}
		}
	}
	return 0;
}
