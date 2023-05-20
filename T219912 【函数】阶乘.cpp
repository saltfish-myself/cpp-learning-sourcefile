#include <bits/stdc++.h>
using namespace std;

// 实现 fac 函数 
int fac(int n){
	int num = 1;
	for(int i = 1;i<=n;i++){
		num *= i;
	}
	return num;
}

int main() {

	int n;
	cin >> n;
	cout << fac(n);  // 调用 fac 函数，fac(n) 返回 n! 
	
	return 0;
}
