#include <bits/stdc++.h>
using namespace std;
 
int main(){
	int l = 0,i = 0,j = 0;
	cin>>l;
	while(i<l){
			cout<<"*";
			i++;
	}
	i = 0;
	while(j<l-1){
		cout<<endl;	
		while(i<l){
			cout<<"*";
			i++;
		}
		j++;
		i = 0;
	}
}
