#include <bits/stdc++.h>
using namespace std;

// 实现 fac 函数，计算 n!，并返回 n!(返回值类型是 int) 
int fac(int n) {
	// 实现 fac 函数的功能，计算 n!，并返回 n! 
	int ji = 1;
	for(int i = 1;i<=n;i++){
		ji*=i;
	}
	return ji;
}

int main() {
	
	int n;
	cin >> n;
	int sum = 0;  // 用来存储阶乘和，作为累加器，记得初始化为 0 
	for(int i = 1; i <= n; i++) {  // 数 1~n 
		// 调用 fac 函数，fac(i) 返回 i!，将 i! 加到 sum 中 
		sum+=fac(i); 
	}
	cout << sum;  // 输出阶乘和   
	
	return 0;
}
