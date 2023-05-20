#include<bits/stdc++.h>

using namespace std;
int b[6][6];
int main(){
	int o,t;
	int a[6][6];
	for(int i = 1;i<6;i++){
		for(int j = 1;j<6;j++){
			cin>>a[i][j];
		}
	}
	cin>>o>>t;
	
	for(int i = 1;i<6;i++){
		for(int j = 1;j<6;j++){
			if(i==t){
				b[i][j]=a[o][j];
			}else if(i==o){
				b[i][j]=a[t][j];
			}else{
				b[i][j]=a[i][j];
			}
		}
	}
	for(int i = 1;i<6;i++){
		for(int j = 1;j<6;j++){
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
} 
