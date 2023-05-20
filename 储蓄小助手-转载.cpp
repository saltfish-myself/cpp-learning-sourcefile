#include <bits/stdc++.h>
using namespace std;

int main() {
	
	string name;
	float price; 
	cout << "请输入物品的名称：" << endl;
	cin >> name;
	cout << "保存成功，物品的名称是：" << name << endl; 
	cout << "请输入物品的价格：" << endl;
	cin >> price; 
	cout << "保存成功，物品的价格是：" << price << endl;
	// 输入收入与支出 并计算 
	float income, pay;
	float sum = 0;	
	int week = 1;
	for(; sum < price; ) {
		cout << "当前物品：" << name << "的价格为：" << price << endl; 
		cout << "第" << week << "周的收入是多少？";
		cin >> income;
		cout << "第" << week << "周的支出是多少？";
		cin >> pay;
		sum = income - pay + sum;  // 第 week 周攒的钱 
		cout << "当前攒的钱为：" << sum << "元" << endl; 
		cout << "---------------------------" << endl;
		if(sum >= price) break;
		price = price * 1.1; 
		week = week + 1;		
	}
	cout << "钱攒够了，快去购物吧！" << endl;
	system("pause");  // 演示程序时保留运行窗口画面的作用 
	
	return 0;
}
