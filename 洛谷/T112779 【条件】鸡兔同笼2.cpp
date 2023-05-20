#include<bits/stdc++.h>
using namespace std;

int main(){
	int x,y;
	cin>>x>>y;
	if((y - 2 * x) % 2 == 0 && y - 2 * x >= 0 && y <= 4 * x){
		cout<<"Yes";
	}else cout<<"No";
	return 0;
}
