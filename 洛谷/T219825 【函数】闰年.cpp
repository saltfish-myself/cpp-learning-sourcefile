#include <bits/stdc++.h>
using namespace std;

// 实现 is_leap 函数，返回值是 bool 类型
bool is_leap(int y) {  
	// 实现 is_leap 函数的功能：如果 y 是闰年就返回 true；如果 y 是平年就返回 false  
	if(y%4==0&&y%100!=0||y%400==0){
		return true;
	}else{
		return false;
	}
}

int main() {

	int y;
	cin >> y;
	if(is_leap(y)) cout << "YES";  // 如果 is_leap 函数返回 true，则说明是闰年 
	else cout << "NO";  // 如果 is_leap 函数返回 false，则说明是平年

	return 0;
}
