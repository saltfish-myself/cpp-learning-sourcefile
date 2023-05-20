#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int h,m,t,g;
	cin>>h>>m;
	t = h * 60 + m;
	cout<<t;
	g = t + 45;
	if(g > 480){
		cout<<"late";
	}else if(g <= 480){
		cout<<"on time";
	}
	return 0;
}
