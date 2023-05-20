#include <bits/stdc++.h>
using namespace std;
 
int main(){
	int n;
    cin>>n;
    int x = 0;
	int s = n;
	while(s>0){
		x = x * 10+s % 10;
		s = s / 10;
	}
	if(x==n){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
		return 0;
}
