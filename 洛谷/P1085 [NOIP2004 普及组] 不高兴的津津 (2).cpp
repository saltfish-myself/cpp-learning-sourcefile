#include<bits/stdc++.h>
using namespace std;
int tt[8],w[7];
int main(){
	int t,t2,me = 0,n,mx;//t:学校时间 ,me为两天中不高兴最长一天的比较值 
	
	for(int i = 0;i<7;i++){
		cin>>t>>t2;
		t = t + t2;
		tt[i] = t;
	}
	for(int i = 0;i<7;i++){
		if(tt[i] >= 8){
			if(me != 0){
				for(int j = 0;i<7;i++){
					if(tt[i] >= tt[j]){
						mx = i;
				}
				if(tt[i] >= me){
					me = tt[j];
					w[i]++;
				}else me = 0;
			}
			
		}
	}
}
//	for(int i = 0;i<=7;i++){
//		if()
//	}
}
