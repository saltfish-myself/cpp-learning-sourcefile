#include <bits/stdc++.h>
using namespace std;

// 实现 add 函数，求得 a + b 的值(并且返回)，有参数，有返回值(且返回值类型是 int) 
int add(int a, int b) { 
	// 实现 add 函数的功能：求得 a + b 的值(并且返回) 
	int sum = a + b;
	return sum;
} 

int main() {
	
	int a, b;  // 定义变量 a b 
	cin >> a >> b;  // 输入 a b 
	// 调用 add 函数，求得 a + b 的值，有参数，有返回值，且将返回值赋值给 sum 
	int sum = add(a, b);  
	cout << sum;  // 输出 sum 
	
	return 0;
}
