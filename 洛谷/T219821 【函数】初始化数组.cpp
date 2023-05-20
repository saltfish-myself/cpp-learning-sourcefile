#include <bits/stdc++.h>
using namespace std;

// 定义数组 a，全局数组，而且要定义在 init 函数的上面，init 函数才可使用 
int a[20];  

// 实现 init 函数，将数组 a 初始化为 -1，无参数，也无返回值  
void init() { 
	// 实现函数功能：数组 a 初始化为 -1 
	for(int i = 0;i<20;i++){
		a[i] = -1;
	}
	
}

int main() {
	
	init();  // 调用 init 函数，将数组 a 初始化为 -1，既无参数，也无返回值 
	for(int i = 0; i < 20; i++) {  // 输出 a 数组 
		cout << a[i] << " ";
	}

	return 0;
}
