# include <bits/stdc++.h>
using namespace std;

int a, o = 1;
int main () {
	cin>>a;
	for(int i = 0;a > 1;i++){
		o++;
		a = a / 2;
	}
//	while (a > 1) {
//		o++; 
//		a /= 2;
//	}
	cout<<o;
	return 0;
}
