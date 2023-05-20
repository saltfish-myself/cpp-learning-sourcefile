#include <bits/stdc++.h>
using namespace std;

int main(){
	
	double n;
	cin>>n;
	if(n < 7){
		cout<<"Acidic";
	}else if(n == 7){
		cout<<"neutral";
	}else{
		cout<<"alkalinity";
	}
	return 0;
}
