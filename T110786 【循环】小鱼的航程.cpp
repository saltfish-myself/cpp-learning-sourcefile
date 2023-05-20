#include<bits/stdc++.h>
using namespace std;

int main(){
	int x,n,m=0;//x是周几，n是几天
	cin>>x>>n;
	for (int i = 1;i<=n;i++){
		if(x<6){
			m = m + 250;
			if(x==7){
				x = 1;
			}else{
				x++;
			}
		}else{
			if(x==7){
				x = 1;
			}else{
				x++;
			}
			continue;
		}
	}
	cout<<m;
}
