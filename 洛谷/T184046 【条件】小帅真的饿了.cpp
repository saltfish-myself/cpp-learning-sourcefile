#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b,x1,y1,x2,y2,x3,y3;
	cin>>a>>b>>x1>>y1>>x2>>y2>>x3>>y3;
	if(floor(b / y1) * x1 >= a){
		cout<<"YES";
	}else if(floor(b / y2) * x2 >= a){
		cout<<"YES";
	}else if(floor(b / y3) * x3 >= a){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
}
