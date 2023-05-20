#include <bits/stdc++.h>
using namespace std;

// 实现 is_pal 函数，如果 n 是回文数，则返回 true，否则返回 false 
bool is_pal(int n) {
	int m = n;
	int sum = 0;
	while(m){
		sum = sum * 10 + m % 10;
		m/=10;
	}
	if(sum==n){
		return true;
	}else{
		return false;
	}
} 

// 实现 is_prime 函数，如果 n 是素数，则返回 true，否则返回 false
bool is_prime(int n) {
	if(n<2){
	return false;
	}
	for(int i = 2;i<n;i++){
		if(n%i==0){
		return false;
		}
	}
	return true;
}

int main() {
	
	int n;
	cin >> n;
	// 如果 is_pal(n) 返回 true，并且 is_prime(n) 返回 true，则说明 n 是回文素数 
	if(is_pal(n) && is_prime(n)) {  
		cout << "Yes";
	}else {  // 否则，n 不是回文素数 
		cout << "No";
	}

	return 0;
}
