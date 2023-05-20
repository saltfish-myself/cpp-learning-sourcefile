#include<bits/stdc++.h>
using namespace std;
int a[99];
int  main(){
	int b,c,d;
	cin>>b>>c;
	for(int i = 0;i<c;i++){
		cin>>d;
		if(a[d] == 0){
			a[d]++;
		}
	}
	for(int i = 0;i<b;i++){
		if(a[i]!=0){
			b--;
		}
	}
	cout<<b;
} 
