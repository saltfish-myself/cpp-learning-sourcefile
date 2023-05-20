#include<bits/stdc++.h>
using namespace std;

int main(){
	string a,b,o,l;
	int k;
	cin>>a>>b;
	k = a.size();
	for(int i = 0;i<k;i++){
		for(int j = 0;j<i;j++){
			l += a[i];
			break;
		}
		cout<<l;
//		if()
	}
}
