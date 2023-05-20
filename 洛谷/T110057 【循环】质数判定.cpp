#include<bits/stdc++.h>
using namespace std;

int main(){
	int in,out,sum;
	cin>>in;
	for (int i=in;i>=1;i--){
		if(in % i == 0){
			sum++;
		}	
	}
	if (sum == 2){
			cout<<"Yes";
		}else{
			cout<<"No";
		}
}
