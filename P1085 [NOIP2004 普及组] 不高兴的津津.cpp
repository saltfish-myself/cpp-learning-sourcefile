#include<bits/stdc++.h>
using namespace std;

int main(){
	int sc,af,all[7],t,most,num;
	for (int i = 0;i<7;i++){
		cin>>sc>>af;
		t = sc + af;
		all[i] = t;
		if(all[i] >= 8){
			for(int j = i;j>=0;j--){
				if(all[i]>all[j]){
					most = i+1;
				}
			}
		}
	}
	for(int k = 0;k<7;k++){
		num = num + all[k];
	}
	if(num = 0){
		most = 0;
	}
	cout<<most;
}
//需要搞明白特殊的几天有什么特别的特征 
