#include<bits/stdc++.h>
using namespace std;

int main(){
	int l,s,sum = 0;//l,s分别为行和列 
	cin>>l>>s;
	int a[l][s];
	for(int i = 0;i<l;i++){
		for(int j = 0;j<s;j++){
			cin>>a[i][j];
		}
	}
	for(int i = 0;i<l;i++){
		for(int j = 0;j<s;j++){
			if(i==0||i==l-1){
				sum += a[i][j];
			}else if(j==0||j==s-1){
				sum += a[i][j];
			}
		}
	}
	cout<<sum;
	return 0; 
}
