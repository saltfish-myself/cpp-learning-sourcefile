#include <bits/stdc++.h>
using namespace std;

// ʵ�� fac ���� 
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
	cout << fac(n);  // ���� fac ������fac(n) ���� n! 
	
	return 0;
}
